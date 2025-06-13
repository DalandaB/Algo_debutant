#include <iostream>
#include <vector>
using namespace std;

int  main()
{
    int choix=0;
    do
    {
        cout <<"Choisissez votre programme" <<endl;
        cout <<"1-Les dix nombres suivants"  <<endl;
        cout <<"2- Le nombre de valeurs positives et negatives"<<endl;
        cout <<"3- La somme des n entiers naturels"<<endl;
        cout <<"4- Somme et produit d'une suite de n reels"<<endl;
        cout <<"5-Nombres paires entre 1 et l'entier saisie"<<endl;
        cout <<"7- Factoriel de n"<<endl;
        cout <<"8- La table de multiplication d'un  nombre" <<endl;
        cout <<"9- Les tables de multiplication de 1 à un nombre saisie"<<endl;
        cout <<"11- Plus grand et plus petit d'une serie de nombres"<<endl;
        cout <<"12- Identification d'un nombre premier"<<endl;
        cout <<"13- Nombre parfait"<<endl;
        cout <<"14- Nombres premiers compris entre 1 et n"<<endl;
        cout <<"15- Nombres premiers ou parfait de 1 à n"<<endl;
        cout <<"16- Nombres amis"<<endl;
        cout <<"17- Affichage, somme et  produit d'une suite de  nombre"<<endl;
        cout <<"18- Meme que le 17 mais avec O/N"<<endl;
        cout <<"19- Suite croissante de nombre"<<endl;
        cout <<"0 Pour quitter" <<endl;
        cout <<"Entrer votre choix "<<endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
            {
                int n;
                cout <<"Entrer le nombre de depart" <<endl;
                cin  >> n;
                cout<< " Affichage des dix nombres suivants: "<<endl;
                for (int i=1; i<11;i++)
                {
                    cout<< n+i << "\t";
                }
              cout <<endl;
            }
            break;

        case 2:
            {
                cout <<"Entrer une serie de nombres et 0 pour terminer la saisie" <<endl;
                int n,cpp=0,cpn=0;
    
                do{
                    cin >>n;
                    if(n>0)
                    cpp++;
                    if (n<0)
                    cpn++;
                }while (n!=0);
                cout<< "vous avez entrer "<<cpp<<" nombres positifs et "<<cpn<<" nombres negatifs "<<endl;
            }break;
         
        case 3:
            {
                int n; int somme=0;
                cout <<"Entrer un entier naturel"<<endl;
                cin >> n;
                for( int i=1; i<n+1;i++)
                {
                    somme+=i;
                }
                cout <<" la somme des entiers de 1 à "<<n<<" vaut "<< somme<<endl;
            } break;
            
        case 4:
            {
                float n, somme=0, produit=1;
                cout<<"Entrer une suite de reels de O pour la fin de liste "<<endl;
                cin >>n;
                while (n!=0)
                {
                    somme+=n;
                    produit*=n;
                    cin >>n;
                }
                
                cout << "La somme de ses nombres vaut "<<somme<< " et le produit vaut "<<produit<<endl;
            }break;
        case 5:
            {
                cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }
                cout <<"la liste des nombres paires est:"<<endl;
                for (int i =1; i<n;i++)
                {
                    if (i%2==0)
                    cout<< i<< "\t";
                }

                cout <<endl;
            }break;
        case 7:
            {
               cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }
              int facto=1;
              for (int i=1;i<=n;i++)
              facto*=i;
              cout << "Le factoriel de "<<n<< " vaut " <<facto<<endl;
            }break;
        case 8:
        {
           
               cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }
                cout <<"La table de multiplication de "<<n <<endl;
                for (int i=1; i<=n; i++)
                {
                    cout <<i <<" * "<<n<<" = "<<i*n<<endl;
                }
        }break;
        case 9:
        {
            cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }

                for (int j=1;j<=n;j++)
                {
                    cout <<"La table de multiplication de "<<j <<endl;
                    for (int i=1; i<=n; i++)
                        {
                            cout <<i <<" * "<<j<<" = "<<i*j<<endl;
                        }
                }
        }break;
        case 11:
            {
                cout <<"Entrer une serie de nombres et 0 pour terminer la saisie" <<endl;
                int n;
                cin>>n;
                int min=n,max=n;
                while (n!=0)
                {
                    if (n<min)
                    min =n;
                    if (n>max)
                    max=n;
                    cin >>n;
                }
                cout <<" Le minimun de la liste est "<<min << " et le maximum est "<<max<<endl;
            }break;
        case 12:
        {
                cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }
                int cpp =0;
                for (int i=1;i<=n; i++)
                {
                    if  (n%i==0)
                    cpp++;
                }
                if (cpp==2)
                cout <<n<<" est un nombre premier" <<endl;
                else
                 cout <<n<<" n'est un pas s nombre premier" <<endl;

        }break;
        case 13:
        {
                cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }  
                int somme =0;
                for (int i=1;i<n; i++)
                {
                    if  (n%i==0)
                    somme+=i;
                }
                if (somme==n)
                cout<<n <<" est un nombre parfait"<<endl;
                else
                cout <<n <<" n'est  pas un nombre parfait"<<endl;
        }break;
        case 14:
        {
                cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }  cout <<"Affichage des nombres"<<endl;
                int compteur_nb=0;
                for (int j= 1; j<=n;j++)
                 {
                            int cpp =0;
                            for (int i=1;i<=j; i++)
                            {
                                if  (j%i==0)
                                cpp++;
                            }
                        if (cpp==2)
                        {cout <<j <<"\t";compteur_nb++ ;}
                 }cout <<endl;
                 if (compteur_nb==0)
                cout <<"Aucun nombre premier dans la liste "<<endl;

        }break;

        case 15:
        {
            cout <<"Entrer un nombre positif"<<endl;
                int n;
                cin>>n;
                while(n<0)
                {
                    cout <<"Entrer un nombre positif"<<endl;
                    cin >> n;
                }  cout <<"Liste des nombres premiers ou paires compris"<<endl;
                int compteur_nb=0; int compteur_nbp=0;
                for (int j= 1; j<=n;j++)
                 {
                            int somme =0;
                            int cpp =0;
                            for (int i=1;i<=j; i++)
                            {
                                if  (j%i==0)
                                cpp++;
                            }
                            for (int i=1;i<j; i++)
                            {
                                if  (j%i==0)
                                somme+=i;
                            }
                        if (cpp==2)
                        {cout <<j <<" premier\t";compteur_nb++ ;}
                        if (somme==j)
                         {cout<<j <<" parfait\t"; compteur_nbp++;}
                 }cout <<endl;
                 if (compteur_nb==0)
                cout <<"Aucun nombre premier dans la liste "<<endl;
                if (compteur_nbp==0)
                cout <<"Aucun nombre parfait dans la liste" <<endl;
        }break;
        case 16:
        {
            int n,m;
            cout <<"Entrer 2 entiers"<<endl;
            cin >>m;cin>>n;
            int somme_m=0, somme_n=0;
            for(int i=2;i<m;i++)
            {
                if(m%i==0)
                somme_m+=i;
            }
            for (int i=2;i<n;i++)
            {
                if(n%i==0)
                somme_n+=i;
            }
            if(somme_m==n && somme_n==m)
                cout <<m <<" et "<<n<<" sont amis"<<endl;
            else
                cout <<m <<" et "<<n<<" ne  sont pas  amis"<<endl;
        }break;
        case 17:
        {
                float n, somme=0, produit=1;
                cout<<"Entrer une suite de reels de O pour la fin de liste "<<endl;
                cin >>n;
                vector<float> tab;
                while (n!=0)
                {
                    tab.push_back(n);
                    somme+=n;
                    produit*=n;
                    cin >>n;
                    
                    
                }
                cout<<"Affichage des nombres saisis"<<endl;
                for (int i=0;i<tab.size();i++)
                  cout <<tab[i]<<"\t";
                cout <<endl;
                cout << "La somme de ses nombres vaut "<<somme<< " et le produit vaut "<<produit<<endl;
        }break;
        case 18:
        {
                float n, somme=0, produit=1;
                vector<float> tab;
                char choix;
                cout <<"voulez-vous saisir un nombre"<<endl;
                cin >>choix ;
                while (choix!= 'N' && choix!='n')
                {
                    
                    cout<<"Saisissez le nombre "<<endl;
                    cin >>n;
                    tab.push_back(n);
                    somme+=n;
                    produit*=n;
                    cout <<"voulez-vous saisir un nombre"<<endl;
                    cin >>choix ;
                }
                
                cout<<"Affichage des nombres saisis"<<endl;
                for (int i=0;i<tab.size();i++)
                  cout <<tab[i]<<"\t";
                cout <<endl;
                cout << "La somme de ses nombres vaut "<<somme<< " et le produit vaut "<<produit<<endl;
        }break;
        case 19:
        {
            cout <<"Entrer une serie de nombres et 0 pour terminer la saisie" <<endl;
                int n; int m; bool verif ;
                 cin >>n;
                    m=n;
                while (n!=0){
                    cin >>n;
                    if (m>n)
                        {cout <<"heeeggfhghj" ;   
                        verif=false;}
                    
                    m=n;
                    
                }
                if (verif=false)
                     cout<<"La liste est décroissante"<<endl;
                else 
                     cout <<"La liste est croissante"<<endl;
        }break;
        default:
            break;
            
        }

    }while (choix != 0);


   



    return 0;
}
