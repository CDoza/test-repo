// CS 1A Lab 3 Framework

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// main client --------------------------------------------------------
int main()
{
   // food #1 constants
   const string FOOD_1_NAME = "chicken";
   const  int FOOD_1_SODIUM_P100G = 91;  // in miligrams
   const  int FOOD_1_TOTAL_CARB_P100G = 2;  // in grams
   const  double FOOD_1_CALCIUM_P100G = 17.0;  // in miligrams
   const  double FOOD_1_PROTEIN_P100G = 30.6;  // in grams

                                                  // food #2 constants
   const  string FOOD_2_NAME = "yogurt";
   const  int FOOD_2_SODIUM_P100G = 70;  // in miligrams
   const  int FOOD_2_TOTAL_CARB_P100G = 7;  // in grams
   const  double FOOD_2_CALCIUM_P100G = 183.0;  // in miligrams
   const  double FOOD_2_PROTEIN_P100G = 5.2; // in grams

                                                 // food #3 constants
   const  string FOOD_3_NAME = "garlic";
   const  int FOOD_3_SODIUM_P100G = 17;  // in miligrams
   const  int FOOD_3_TOTAL_CARB_P100G = 33;  // in grams
   const  double FOOD_3_CALCIUM_P100G = 181.0;  // in miligrams
   const  double FOOD_3_PROTEIN_P100G = 6.4; // in grams

                                                 // food #4 constants
   const  string FOOD_4_NAME = "white rice";
   const  int FOOD_4_SODIUM_P100G = 5;  // in miligrams
   const  int FOOD_4_TOTAL_CARB_P100G = 21;  // in grams
   const  double FOOD_4_CALCIUM_P100G = 2.0;  // in miligrams
   const  double FOOD_4_PROTEIN_P100G = 2.0; // in grams

                                                 // food #5 constants
   const  string FOOD_5_NAME = "ginger";
   const  int FOOD_5_SODIUM_P100G = 13;  // in miligrams
   const  int FOOD_5_TOTAL_CARB_P100G = 18;  // in grams
   const  double FOOD_5_CALCIUM_P100G = 16.0;  // in miligrams
   const  double FOOD_5_PROTEIN_P100G = 1.8; // in grams

   const  string INDENT = "   ";

   string recipeName, userInputStr;
   int userInputInt;
   double totalSodium, totalCarbs, totalCalcium, totalProtein, servingSize;

   // initialize accumulator variables
   totalSodium = 0;
   totalCarbs = 0;
   totalCalcium = 0.;
   totalProtein = 0.;
   servingSize = 0.;

   // print menu
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << INDENT << "Food #1: " << FOOD_1_NAME << endl;
   cout << INDENT << "Food #2: " << FOOD_2_NAME << endl;
   cout << INDENT << "Food #3: " << FOOD_3_NAME << endl;
   cout << INDENT << "Food #4: " << FOOD_4_NAME << endl;
   cout << INDENT << "Food #5: " << FOOD_5_NAME << endl << endl;

   // name of recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);

   // # of servings
   cout << "How many servings are in " << recipeName << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> servingSize;
   if (servingSize > 10) {
      cout << "ERROR! Your value is too large." << endl;
      return 0;
   }
   if (servingSize < 1) {
      cout << "ERROR! Your value is too small." << endl;
      return 0;
   }
   // food #1 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_1_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt > 1000) {
      cout << "ERROR! Your value is too large." << endl;
      return 0;
   }
   if (userInputInt < 0) {
      cout << "ERROR! Your value is too small." << endl;
      return 0;
   }

   // update accumulators
   totalSodium += userInputInt * (FOOD_1_SODIUM_P100G / 100.);
   totalCarbs += userInputInt * (FOOD_1_TOTAL_CARB_P100G / 100.);
   totalCalcium += userInputInt * (FOOD_1_CALCIUM_P100G / 100.);
   totalProtein += userInputInt * (FOOD_1_PROTEIN_P100G / 100.);

   // food #2 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_2_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt > 1000) {
      cout << "ERROR! Your value is too large." << endl;
      return 0;
   }
   if (userInputInt < 0) {
      cout << "ERROR! Your value is too small." << endl;
      return 0;
   }

   // update accumulators
   totalSodium += userInputInt * (FOOD_2_SODIUM_P100G / 100.);
   totalCarbs += userInputInt * (FOOD_2_TOTAL_CARB_P100G / 100.);
   totalCalcium += userInputInt * (FOOD_2_CALCIUM_P100G / 100.);
   totalProtein += userInputInt * (FOOD_2_PROTEIN_P100G / 100.);

   // food #3 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_3_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt > 1000) {
      cout << "ERROR! Your value is too large." << endl;
      return 0;
   }
   if (userInputInt < 0) {
      cout << "ERROR! Your value is too small." << endl;
      return 0;
   }

   // update accumulators
   totalSodium += userInputInt * (FOOD_3_SODIUM_P100G / 100.);
   totalCarbs += userInputInt * (FOOD_3_TOTAL_CARB_P100G / 100.);
   totalCalcium += userInputInt * (FOOD_3_CALCIUM_P100G / 100.);
   totalProtein += userInputInt * (FOOD_3_PROTEIN_P100G / 100.);

   // food #4 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_4_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt > 1000) {
      cout << "ERROR! Your value is too large." << endl;
      return 0;
   }
   if (userInputInt < 0) {
      cout << "ERROR! Your value is too small." << endl;
      return 0;
   }

   // update accumulators
   totalSodium += userInputInt * (FOOD_4_SODIUM_P100G / 100.);
   totalCarbs += userInputInt * (FOOD_4_TOTAL_CARB_P100G / 100.);
   totalCalcium += userInputInt * (FOOD_4_CALCIUM_P100G / 100.);
   totalProtein += userInputInt * (FOOD_4_PROTEIN_P100G / 100.);

   // food #5 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_5_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt > 1000) {
      cout << "ERROR! Your value is too large." << endl;
      return 0;
   }
   if (userInputInt < 0) {
      cout << "ERROR! Your value is too small." << endl;
      return 0;
   }

   // update accumulators
   totalSodium += userInputInt * (FOOD_5_SODIUM_P100G / 100.);
   totalCarbs += userInputInt * (FOOD_5_TOTAL_CARB_P100G / 100.);
   totalCalcium += userInputInt * (FOOD_5_CALCIUM_P100G / 100.);
   totalProtein += userInputInt * (FOOD_5_PROTEIN_P100G / 100.);

   // report results --------------------------------------------------
   cout << "\nNutrition for " << recipeName << " per serving ------------" << endl;
   cout << INDENT << "Sodium: " << totalSodium / servingSize << endl;
   cout << INDENT << "Total Carbohydrates: " << totalCarbs / servingSize << endl;
   cout << INDENT << "Calcium: " << totalCalcium / servingSize << endl;
   cout << INDENT << "Protein: " << totalProtein / servingSize << endl;

   return 0;

}
/*------------------ RUN #1-------------------------
----------List of Possible Ingredients-------- -
   Food #1: chicken
   Food #2: yogurt
   Food #3: garlic
   Food #4: white rice
   Food #5: ginger

What are you calling this recipe ? chicken tandoori
How many servings are in chicken tandoori ? 2
How many grams of chicken ? 567
How many grams of yogurt ? 55
How many grams of garlic ? 45
How many grams of white rice ? 85
How many grams of ginger ? 24

Nutrition for chicken tandoori per serving------------
Sodium : 284.745
   Total Carbohydrates : 26.105
   Calcium : 142.015
   Protein : 90.687
   Press any key to continue . . .

------------------ RUN #2-------------------------
---------- List of Possible Ingredients ---------
   Food #1: chicken
   Food #2: yogurt
   Food #3: garlic
   Food #4: white rice
   Food #5: ginger

What are you calling this recipe? chicken tandoori without rice
How many servings are in chicken tandoori without rice? 2
How many grams of chicken? 700
How many grams of yogurt? 90
How many grams of garlic? 45
How many grams of white rice? 0
How many grams of ginger? 60

Nutrition for chicken tandoori without rice per serving ------------
   Sodium: 357.725
   Total Carbohydrates: 22.975
   Calcium: 187.375
   Protein: 111.42
Press any key to continue . . .

------------------ RUN #3-------------------------
   ---------- List of Possible Ingredients ---------
   Food #1: chicken
   Food #2: yogurt
   Food #3: garlic
   Food #4: white rice
   Food #5: ginger

What are you calling this recipe? chicken tandoori
How many servings are in chicken tandoori? 11
ERROR! Your value is too large.
Press any key to continue . . .

------------------ RUN #4-------------------------
---------- List of Possible Ingredients ---------
   Food #1: chicken
   Food #2: yogurt
   Food #3: garlic
   Food #4: white rice
   Food #5: ginger

What are you calling this recipe? chickenless tandoori
How many servings are in chickenless tandoori? 2
How many grams of chicken? 0
How many grams of yogurt? 100
How many grams of garlic? 65
How many grams of white rice? 500
How many grams of ginger? 32

Nutrition for chickenless tandoori per serving ------------
   Sodium: 55.105
   Total Carbohydrates: 69.605
   Calcium: 157.885
   Protein: 9.968
Press any key to continue . . .

------------------ RUN #5-------------------------
---------- List of Possible Ingredients ---------
   Food #1: chicken
   Food #2: yogurt
   Food #3: garlic
   Food #4: white rice
   Food #5: ginger

What are you calling this recipe? a really bad chicken tandoori
How many servings are in a really bad chicken tandoori? 6
How many grams of chicken? 925
How many grams of yogurt? 24
How many grams of garlic? 492
How many grams of white rice? 12
How many grams of ginger? 304

Nutrition for a really bad chicken tandoori per serving ------------
   Sodium: 163.718
   Total Carbohydrates: 39.9633
   Calcium: 190.095
   Protein: 53.583
Press any key to continue . . .

------------------ RUN #6-------------------------
---------- List of Possible Ingredients ---------
   Food #1: chicken
   Food #2: yogurt
   Food #3: garlic
   Food #4: white rice
   Food #5: ginger

What are you calling this recipe? a monstrosity
How many servings are in a monstrosity? 4
How many grams of chicken? 200
How many grams of yogurt? 5000
ERROR! Your value is too large.
Press any key to continue . . .*/