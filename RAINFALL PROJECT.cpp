#include <iostream>
using namespace std;
int main() 
{
	int n,x;
    float cy[12]; 	// cy= current year
    float py[12];	// py= previous year
    float cyTotal = 0, pyTotal = 0;
    cout << "Enter rainfall data for the current year and previous year "<<endl;
		//loop to take input and to do sum of cy and py
    for (int i = 0; i < 12; i++)
	 {
        cout << "Month "<< i+1 << ": "<<endl;
        cout << "Current Year: ";
        cin >> n;
        if(n<0)
        {
        	i--;
       	cout << "Enter posiive number\n";
		}
		else
		{
			cy[i]=n;
        cout << "Previous Year: ";
        cin >> x;
        if(x<0)
        {
        	i--;
	    cout << "Enter posiive number\n";
        
		}
		else
		{
			py[i]=x;
		}
		//calculation to store total numbers in cytotal and pytotal
        cyTotal = cyTotal + cy[i];
        pyTotal = pyTotal + py[i];
      }
    }
		//displaying statistics
    cout << "\nStatistics"<<endl;
    cout << "Current Year Total Rainfall: " << cyTotal << " inches"<<endl;
    cout << "Previous Year Total Rainfall: " << pyTotal << " inches"<<endl;
	cout << "Average Monthly Rainfall (Current Year): " << cyTotal / (12) << " inches"<<endl;
    cout << "Average Monthly Rainfall (Previous Year): " << pyTotal / (12) << " inches"<<endl;
		//rainfall comparison chart
    cout << "\nRainfall Comparison Chart (in inches)"<<endl<<endl;
    cout << "Month CurrentYear PreviousYear" <<endl;

    for (int i = 0; i < 12; i++) 
	{
        cout << i + 1 << "\t" << cy[i] << "\t\t" << py[i] <<endl;
    }
   		 //graph
    cout << "\n Graph:"<<endl;
    for (int i = max(cyTotal, pyTotal); i > 0; i--)
	 {
        for (int j = 0; j < 12; j++) 
		{
			
           if (cy[j] >= i) 
		   {
    			cout << "*\t";
			}
			 else 
		 	{
    			cout << " \t";
			}

    	}
        	cout << "\n";
     }

   
    for (int i = 1; i <= 12; ++i) 
	{
        cout << i << "\t";
    }
    
   cout<<"\n--------------------------------------------------------------------------------------------------------------------- \n\n\t\t\t\t\t\t\tMonths ";
    
	system ("pause");
	return 0;
}