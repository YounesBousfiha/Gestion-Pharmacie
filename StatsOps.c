#include "main.h"


float allSells(void) {
    char buffer[MAX];
    int lines;
    float total = 0;
    Log_t *tempSells;
    FILE *fp;

    fp = openFile(sellFile, "r");
    lines = countLines(fp);
    tempSells = malloc(sizeof(Produit_t));
    if (!tempSells) {
        perror(FMEMO);
        exit(1);
    }
	struct tm *t = timeNow();
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        sscanf(buffer, "%f %s %s %d %s %d", &tempSells->price,
                                      tempSells->weekday,
                                      tempSells->month,
                                      &tempSells->monthday,
									  tempSells->time,
                                      &tempSells->year);
		// TODO: Implement Other Condition to Verfiy the Month & Year
		if (t->tm_mday == tempSells->monthday) {
			total += tempSells->price;
				}
    }
    fclose(fp);
    free(tempSells);
    return total;
}

//void highSell(void) {}

//void cheapSell(void) {}

//void averageSell(void) {}

void getStat(int choice) {
    switch(choice) {
        case 1:
            printf("the Total Sells: %.2f\n", allSells());
            break;
        case 2:
            //highSell();
            break;
        case 3:
            //cheapSell();
            break;
        case 4:
            //averageSell();
            break;
        default:
            printf("Enter a number from 1 to 3\n");
    }
}