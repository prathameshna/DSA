        #include <iostream>
        using namespace std;
        int main() {
            #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
            #endif

            int amount1;
            cin>>amount1;

            int amount2;
            cin>>amount2;

            int balence;
            balence=amount1+amount2;
            cout<<balence;

            return 0;
        }