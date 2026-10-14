
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Valiutu kursu konstantos
    const double GBP_BENDRAS = 0.8729;
    const double GBP_PIRKTI = 0.8600;
    const double GBP_PARDUOTI = 0.9220;

    const double USD_BENDRAS = 1.1793;
    const double USD_PIRKTI = 1.1460;
    const double USD_PARDUOTI = 1.2340;

    const double INR_BENDRAS = 104.6918;
    const double INR_PIRKTI = 101.3862;
    const double INR_PARDUOTI = 107.8546;

    double turimu_pinigu_suma, gauta_pinigu_suma;
    int pasirinkimas, n=0, a, o=0;

    while(n==0)
    {
        cout<<"Menu: 1-Valiutu palyginimas, 2-Pirkimas, 3-Pardavimas, 4-Iseiti"<<endl;
        cin>>pasirinkimas;

        if(pasirinkimas==1)
        {
            n=1;
            o=0;

            while(o==0)
            {
                cout<<"Su kuo norite palyginti: 1-GBP, 2-USD, 3-INR"<<endl;
                cin>>a;

                if(a==1)
                {
                    o=1;
                    cout<<fixed<<setprecision(2);
                    cout<<"1 EUR = "<<GBP_BENDRAS<<" GBP"<<endl;
                    cout<<"1 GBP = "<<1.0/GBP_BENDRAS<<" EUR"<<endl;
                    n=0;
                }
                else
                    if(a==2)
                    {
                        o=1;
                        cout<<fixed<<setprecision(2);
                        cout<<"1 EUR = "<<USD_BENDRAS<<" USD"<<endl;
                        cout<<"1 USD = "<<1.0/USD_BENDRAS<<" EUR"<<endl;
                        n=0;
                    }
                    else
                        if(a==3)
                        {
                            o=1;
                            cout<<fixed<<setprecision(2);
                            cout<<"1 EUR = "<<INR_BENDRAS<<" INR"<<endl;
                            cout<<"1 INR = "<<1.0/INR_BENDRAS<<" EUR"<<endl;
                            n=0;
                        }
                        else
                            cout<<"Neteisingas valiutos pasirinkimas."<<endl;
            }
        }
        else
            if(pasirinkimas==2)
            {
                n=1;
                o=0;

                while(o==0)
                {
                    cout<<"Ka norite pirkti: 1-GBP, 2-USD, 3-INR"<<endl;
                    cin>>a;

                    if(a==1)
                    {
                        o=1;
                        cout<<"Iveskite suma eurais: ";
                        cin>>turimu_pinigu_suma;

                        if(turimu_pinigu_suma<=0)
                            cout<<" Suma turi buti didesne uz nuli."<<endl;
                        else
                        {
                            gauta_pinigu_suma=turimu_pinigu_suma*GBP_PIRKTI;
                            cout<<fixed<<setprecision(2);
                            cout<<"Pradine suma: "<<turimu_pinigu_suma<<" EUR"<<endl;
                            cout<<"Gauta suma: "<<gauta_pinigu_suma<<" GBP"<<endl;
                        }
                        n=0;
                    }
                    else
                        if(a==2)
                        {
                            o=1;
                            cout<<"Iveskite suma eurais: ";
                            cin>>turimu_pinigu_suma;

                            if(turimu_pinigu_suma<=0)
                                cout<<"Suma turi buti didesne uz nuli."<<endl;
                            else
                            {
                                gauta_pinigu_suma=turimu_pinigu_suma*USD_PIRKTI;
                                cout<<fixed<<setprecision(2);
                                cout<<"Pradine suma: "<<turimu_pinigu_suma<<" EUR"<<endl;
                                cout<<"Gauta suma: "<<gauta_pinigu_suma<<" USD"<<endl;
                            }
                            n=0;
                        }
                        else
                            if(a==3)
                            {
                                o=1;
                                cout<<"Iveskite suma eurais: ";
                                cin>>turimu_pinigu_suma;

                                if(turimu_pinigu_suma<=0)
                                    cout<<" Suma turi buti didesne uz nuli."<<endl;
                                else
                                {
                                    gauta_pinigu_suma=turimu_pinigu_suma*INR_PIRKTI;
                                    cout<<fixed<<setprecision(2);
                                    cout<<"Pradine suma: "<<turimu_pinigu_suma<<" EUR"<<endl;
                                    cout<<"Gauta suma: "<<gauta_pinigu_suma<<" INR"<<endl;
                                }
                                n=0;
                            }
                            else
                                cout<<"Neteisingas valiutos pasirinkimas."<<endl;
                }
            }
            else
                if(pasirinkimas==3)
                {
                    n=1;
                    o=0;

                    while(o==0)
                    {
                        cout<<"Ka norite parduoti: 1-GBP, 2-USD, 3-INR"<<endl;
                        cin>>a;

                        if(a==1)
                        {
                            o=1;
                            cout<<"Iveskite GBP suma: ";
                            cin>>turimu_pinigu_suma;

                            if(turimu_pinigu_suma<=0)
                                cout<<" Suma turi buti didesne uz nuli."<<endl;
                            else
                            {
                                gauta_pinigu_suma=turimu_pinigu_suma/GBP_PARDUOTI;
                                cout<<fixed<<setprecision(2);
                                cout<<"Parduota GBP: "<<turimu_pinigu_suma<<endl;
                                cout<<"Gauta EUR: "<<gauta_pinigu_suma<<endl;
                            }
                            n=0;
                        }
                        else
                            if(a==2)
                            {
                                o=1;
                                cout<<"Iveskite USD suma: ";
                                cin>>turimu_pinigu_suma;

                                if(turimu_pinigu_suma<=0)
                                    cout<<" Suma turi buti didesne uz nuli."<<endl;
                                else
                                {
                                    gauta_pinigu_suma=turimu_pinigu_suma/USD_PARDUOTI;
                                    cout<<fixed<<setprecision(2);
                                    cout<<"Parduota USD: "<<turimu_pinigu_suma<<endl;
                                    cout<<"Gauta EUR: "<<gauta_pinigu_suma<<endl;
                                }
                                n=0;
                            }
                            else
                                if(a==3)
                                {
                                    o=1;
                                    cout<<"Iveskite INR suma: ";
                                    cin>>turimu_pinigu_suma;

                                    if(turimu_pinigu_suma<=0)
                                        cout<<" Suma turi buti didesne uz nuli."<<endl;
                                    else
                                    {
                                        gauta_pinigu_suma=turimu_pinigu_suma/INR_PARDUOTI;
                                        cout<<fixed<<setprecision(2);
                                        cout<<"Parduota INR: "<<turimu_pinigu_suma<<endl;
                                        cout<<"Gauta EUR: "<<gauta_pinigu_suma<<endl;
                                    }
                                    n=0;
                                }
                                else
                                    cout<<"Neteisingas valiutos pasirinkimas."<<endl;
                    }
                }
                else
                    if(pasirinkimas==4)
                    {
                        cout<<"Programa baigiama."<<endl;
                        return 0;
                    }
                    else
                        cout<<"Neteisingas meniu pasirinkimas."<<endl;
    }

    return 0;
}
