    /*

     * C Program to Traverse a Graph using DFS

     */

    #include<iostream>

    #include<conio.h>

    using namespace std;

    void floyds(int b[][7],int v)

    {

        int i,j,k;

        for (k = 0; k < v; k++)

        {

            for (i = 0; i < v; i++)

            {

                for (j = 0; j < v; j++)

                {

                    if ((b[i][k] * b[k][j] != 0) && (i != j))

                    {

                        if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))

                        {

                            b[i][j] = b[i][k] + b[k][j];

                        }

                    }

                }

            }

        }

        for (i = 0; i < v; i++)

        {

            cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;

            for (j = 0; j < v; j++)

            {

                cout<<b[i][j]<<"\t";

            }



        }

    }

    int main()

    {

        int b[7][7],ver;
        cout<<"\n"<<"nov:";
        cin>>ver;

        cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";

        for (int i = 0; i < ver; i++)

        {

            cout<<"enter values for "<<(i+1)<<" row"<<endl;

            for (int j = 0; j < ver; j++)

            {

                cin>>b[i][j];

            }

        }

        floyds(b,ver);

        getch();

    }
