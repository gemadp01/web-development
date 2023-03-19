#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

typedef struct {
	char name[200];
	int damage;
	int maxHealth;
}classes;

typedef struct {
	char name[200];
	int damage;
	int maxHealth;
	int goldGained;
	int expGained;
}monster;

bool isNew = false;
monster monsters[] =  {
					{
						"Goblin",
						5,
						20,
						10,
						5
					},
					{
						"Orc",
						3,
						25,
						12,
						7
					}
					,{
						"Wizard",
						10,
						15,
						15,
						10
					}
					};
					
classes _class[] =  {
					{
						"Warrior",
						5,
						150
					},
					{
						"Rogue",
						10,
						75
					}
					,{
						"Archer",
						7,
						100
					}
					};

typedef struct {
	char name[200];
	classes _class;
	int level;
	int gold;
	int exp;
	int health;
}character;

character playerCharacter;

classes loadClass(char c[]) {
	if(strcmp(c, "Warrior") == 0) {
		playerCharacter._class = _class[0];
	}else if(strcmp(c, "Rogue") == 0) {
		playerCharacter._class = _class[1];
	}else if(strcmp(c, "Archer") == 0) {
		playerCharacter._class = _class[2];
	}
	return playerCharacter._class;
}

void loadAccount() {
	
	FILE *fp;
	fp = fopen("account.txt", "r");
	char tempclass[200];
	
	
	
	if(fp == NULL) {
		isNew = true;
		fclose(fp);
		return;
	}
	
	fscanf(fp, "%[^#]#%[^#]#%d#%d#%d#%d",
			playerCharacter.name,
			tempclass,
			&playerCharacter.level,
			&playerCharacter.gold,
			&playerCharacter.exp,
			&playerCharacter.health);
	
	fclose(fp);
	loadClass(tempclass);
	
}

void saveAccount() {
	
	FILE *fp;
	fp = fopen("account.txt", "w");
	
	fprintf(fp, "%s#%s#%d#%d#%d#%d",
			playerCharacter.name,
			playerCharacter._class.name,
			playerCharacter.level,
			playerCharacter.gold,
			playerCharacter.exp,
			playerCharacter.health);
	
	fclose(fp);
}

void newGame() {
	char tempclass[200];
	
	printf("Input your character's name : ");
	scanf("%s", playerCharacter.name); getchar();
	
	do {
		
		printf("Choose your class[Warrior|Rogue|Archer] : ");
		scanf("%s", tempclass); getchar();
		
	}while(strcmp(tempclass, "Warrior") &&
			strcmp(tempclass, "Rogue") &&
			strcmp(tempclass, "Archer"));
	playerCharacter.level = 1;
	playerCharacter.exp = 0;
	playerCharacter.gold = 0;
	
	playerCharacter.health = loadClass(tempclass).maxHealth;
	
}

void firstMenu() {
	
	int input;
	
	do {
		
		printf("1. Start New Game\n");
		if(!isNew) {
			printf("2. Continue Game\n");
		}
		printf(">> ");
		scanf("%d", &input); getchar();
		
		switch(input) {
			case 1:
				newGame();
			break;
		}
		
	}while(input > (isNew == true ? 1 : 2 ) || input < 1);
	
}

void fight(monster m) {
	int input;
	
	int exp = m.expGained;
	int gold = m.goldGained;
	int damage = m.damage;
	int health = m.maxHealth;
	char name[200];
	strcpy(name, m.name);
	

	
	do {
		system("cls");
		printf("%s\n", name);
		printf("Health : %d\n", health);
		printf("Damage : %d\n\n", damage);
		
		printf("%s\n", playerCharacter.name);
		printf("Health : %d\n", playerCharacter.health);
		printf("Damage : %d\n\n", playerCharacter._class.damage);
		
		printf("1. Attack\n");
		printf("2. Run\n");
		printf(">> ");
		
		scanf("%d", &input); getchar();
		
		switch(input) {
			case 1:
				health -= playerCharacter._class.damage;
				if(health <= 0) { // Player win
					playerCharacter.exp += exp;
					playerCharacter.gold += gold;
					printf("You won!\n");
					printf("You gained %d gold(s) and 12 exp(s)\n", gold, exp);
					if(playerCharacter.exp >= 100){
						printf("You've leveled up!\n");
						playerCharacter.exp -= 100;
						playerCharacter.level += 1;
					}
					printf("Press any key to continue..."); getchar();
					return;
				}
				playerCharacter.health -= damage;
				if(playerCharacter.health <= 0) { //Player Lose
					playerCharacter.exp = 0;
					playerCharacter.gold = 0;
					playerCharacter.exp = playerCharacter._class.maxHealth;
					printf("You lose!\nYou lost all your golds and exps\nPress any key to continue...");
					getchar();
					return;
				}
			break;
			case 2:
				printf("You ran away!\n");
				getchar();
				return;
			break;	
		}
		
	}while(true);
}

void fightMenu() {
	
	int input;
	
	do {
		system("cls");
		printf("Fight Menu\n========\n");
		printf("1. Goblin\n");
		printf("2. Orc\n");
		printf("3. Wizard\n");
		printf("4. Back\n");
		printf(">> ");
		scanf("%d", &input); getchar();
		
		switch(input){
			case 1:
				fight(monsters[0]);
			break;
			case 2:
				fight(monsters[1]);
			break;
			case 3:
				fight(monsters[2]);
			break;
		}
	}while(input != 4);
	
}


void heal() {
	int healPrice = 20;
	int gold = playerCharacter.gold;
	
	if(playerCharacter.health == playerCharacter._class.maxHealth) {
		printf("You're already at max health!\n");
	}else if(gold >= healPrice) {
		int input;
		do {
			printf("Do you want to heal yourself fo %d golds ?\n", healPrice);
			printf("1. Yes\n");
			printf("2. No\n");
			printf(">> ");
			scanf("%d", &input);
		}while(input != 1 && input != 2);
		if(input == 2) {
			printf("Press any key to continue...!\n");
			getchar();
			return;
		}
		playerCharacter.health = playerCharacter._class.maxHealth;
		playerCharacter.gold -= healPrice;
		printf("Healed!\n");
		
	}else{
		printf("You don't have enough gold!\n");
	}
	printf("Press any key to continue...!\n"); getchar();
	return;
}

int main() {
	
	loadAccount();
	
	int input;
	
	firstMenu();
	
	do {
		
		system("cls");
		printf("%s's Status\n==========\n", playerCharacter.name);
		printf("Level %d\nClass : %s\nGold : %d\nExp : %d/100\nHealth : %d/%d\n", 
					playerCharacter.level,
					playerCharacter._class.name,
					playerCharacter.gold,
					playerCharacter.exp,
					playerCharacter.health,
					playerCharacter._class.maxHealth);
					
		printf("1. Fight\n");
		printf("2. Heal\n");
		printf("3. Save\n");
		printf("4. Quit\n");
		printf(">> ");
		scanf("%d", &input);
		
		switch(input){
			case 1:
				fightMenu();
				break;
			break;
			case 2:
				heal(); getchar();
			break;
			case 3:
				saveAccount(); getchar();
				printf("Save Successfully!!\n"); 
				printf("Press any key to continue..."); getchar();
			break;
		}
		
	}while(input != 4);
	
	return 0;
}
