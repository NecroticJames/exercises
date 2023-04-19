///selectionsort
#include <iostream>
#include <vector>

using namespace std; 
/* CLASS---> OBIECTE */

class Selectionsort
{
        private:
                vector<int> vect;
                int length;
        public:
                /*
                static
                selectionsort s1();
                selectionsort *s2=new selectionsosrt();
                to delete *s2 we need to use delete s2; to delete it

                char *name;
                copy constructor

                // operator overload pentru operatori si le schimbi functia

                classname (classname na)
                {
                        // shallow copy

                        this->name=na.name;

                        // deep copy-- devine independent copiatul de valoare care s-a copiat pentru ca s-a creeat o adresa noua in memorie.

                        this->name=new char[strlen(na.name)+1];
                        strcpy(this->name=,na.name);
                }

                 */
                Selectionsort(vector<int> &vec, int length)
                {
                        this->vect = vec;
                        this->length = length;
                        cout << "CONSTRUCTOR USED!" << endl;
                }
        int GetLength() const
        {
                return length;
        }
        void addValue(int value)
        {
                vect.push_back(value);
        }
        void SelectSortAsc()
        {
                for(int i=0;i<length-1;i++)
                {
                        int index_min=i;
                        for(int j=i+1;j<length;j++)
                        {
                                if(vect[j]<vect[index_min])
                                {
                                        index_min=j;
                                }
                        }
                        int temp=vect[index_min];
                        vect[index_min]=vect[i];
                        vect[i]=temp;
                }       
        }
        void SelectSortDesc()
        {
                for (int i = 0; i < length - 1; i++)
                {
                        int index_max = i;
                        for (int j = i + 1; j < length; j++)
                        {
                                if (vect[j] > vect[index_max])
                                {
                                        index_max = j;
                                }
                        }
                        int temp = vect[index_max];
                        vect[index_max] = vect[i];
                        vect[i] = temp;
                }
        }
        void BubbleSortAsc()
        {
                for(int c=0;c<length-1;c++)//n-1 times
                {
                        int flag = 0;
                        for(int i=0;i<length-1;i++)
                        {
                                if(vect[i]>vect[i+1])
                                {
                                        int temp=vect[i];
                                        vect[i]=vect[i+1];
                                        vect[i+1]=temp;
                                        flag=1;
                                }
                        }
                        if (flag == 0)
                                break;
                }
        }
        void BubbleSortDesc()
        {
                for (int c = 0; c < length - 1; c++)
                {       
                        int flag=0;
                        for (int i = 0; i < length - 1; i++)
                        {
                                if (vect[i] < vect[i + 1])
                                {
                                        int temp = vect[i];
                                        vect[i] = vect[i + 1];
                                        vect[i + 1] = temp;
                                        flag = 1;
                                }
                        }
                        if(flag==0)
                        break;
                }
        }
        void ShowVectorpls()
        {
                for (int pos = 0; pos < length; pos++)
                {
                       cout<<vect[pos]<<" ";
                }
                cout<<endl;
        }


        

        ~Selectionsort()
        {
                cout<<"Destructor called!"<<endl;
        }
};

