    #include<iostream>
    using namespace std;

    class Solution {
    public:
        
        int subtractProductAndSum(int n) {
            int sum = 0, product = 1;
            while(n!=0){
                int rem = n%10;
                sum = sum + rem;
                product = product * rem;
                n = n/10; 
            }
            cout << "Sum is: " << sum << endl;
            cout << "Product is: " << product << endl;
            
            int result = product - sum;
            cout << "Result = " << result << endl;
            return result;
        }   
    };

    int main(){
        int n;
        cout << "Enter n; ";
        cin >> n;
        Solution s;
        s.subtractProductAndSum(n);
        return 0;
    }