vector<int> Solution::sieve(int A) {
    vector<int> prime(A+1,1);
    vector<int> fin;
    for(int i=2;i*i<=A;i++){
        if(prime.at(i)==1){
            for(int j=i*i;j<=A;j+=i){
                prime.at(j)=0;
            }
        }
    }
    for (int k = 2; k <= A; k++)
        if (prime.at(k))
           fin.push_back(k);

    return fin;       
}
