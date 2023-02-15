/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*    ______++                                                                    */
/*   /_____/\       Name: David Bucio                                             */
/*   \:::__\/       Date: December 31, 1994                                       */
/*    \:\ \  __     Program: Sample Outline Exercise                              */
/*     \:\ \/_/\    Summary: Debugging and Compiling Test                         */
/*      \:\_\ \ \                                                                 */
/*       \_____\/                                                                 */
/*                                                                                */
/*--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*/
/*Identify Preprocessor Directives                                                */
/*--------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

/*--------------------------------------------------------------------------------*/
/*Additional Requisites for Program                                               */
/*--------------------------------------------------------------------------------*/
using namespace std;

ofstream ofs ("sampleOutline.txt");

/*--------------------------------------------------------------------------------*/
/*Initialize Global String Objects                                                */
/*--------------------------------------------------------------------------------*/
string absolutely = "David Bucio";
string no = "December 31, 1994";
string hard = "Sample Outline Exercise";
string coding = "CIS 2541";

string summary = "This is a sample program that outlines the necessary elements\n"
                 "required to compose an elegant and efficient source code.";

string note1 = "SOF Message: ";
string note2 = "EOF Message: ";

string gap1 = " ";
string gap2 = " | ";

/*--------------------------------------------------------------------------------*/
/*Initialize Global Variables                                                     */
/*--------------------------------------------------------------------------------*/
int number;

/*--------------------------------------------------------------------------------*/
/*Construct Header                                                                */
/*--------------------------------------------------------------------------------*/
void header()
{
	ofs << note1;
	ofs << absolutely;
	ofs << gap2;
	ofs << no;
	ofs << gap2;
	ofs << hard;
	ofs << gap2;
	ofs << coding;
	
	ofs << endl;
}

/*--------------------------------------------------------------------------------*/
/*Construct Footer                                                                */
/*--------------------------------------------------------------------------------*/
void footer()
{
	ofs << endl;
	
	ofs << summary;
	
	ofs << endl;
}

/*--------------------------------------------------------------------------------*/
/*End of File Message                                                             */
/*--------------------------------------------------------------------------------*/
void eofmsg()
{
	ofs << endl;
	
	ofs << note2;
	ofs << absolutely;
	ofs << gap2;
	ofs << no;
	ofs << gap2;
	ofs << hard;
	ofs << gap2;
	ofs << coding;
	
	ofs << endl;
}

/*--------------------------------------------------------------------------------*/
/*Program Input                                                                   */
/*   -Module explanation                                                          */
/*--------------------------------------------------------------------------------*/
void input()
{
    cout << endl;
    cout << endl;
}

/*--------------------------------------------------------------------------------*/
/*Program Calculation                                                             */
/*   -Module explanation                                                          */
/*--------------------------------------------------------------------------------*/
void calculate()
{
    ofs << endl;
}

/*--------------------------------------------------------------------------------*/
/*Program Output                                                                  */
/*   -Module explanation                                                          */
/*--------------------------------------------------------------------------------*/
void output()
{
    ofs << endl;
    ofs << endl;
}

/*--------------------------------------------------------------------------------*/
/*Parent Function                                                                 */
/*--------------------------------------------------------------------------------*/
int main()
{
	header();
	input();
	calculate();
	output();
	footer();
	eofmsg();
	ofs.close();

	return 0;
}

/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*    ______nd                                                                    */
/*   /_____/\       Name: David Bucio                                             */
/*   \::::_\/_      Date: December 31, 1994                                       */
/*    \:\/___/\     Program: Sample Outline Exercise                              */
/*     \::___\/_    Summary: Debugging and Compiling Test                         */
/*      \:\____/\                                                                 */
/*       \_____\/                                                                 */
/*                                                                                */
/*--------------------------------------------------------------------------------*/