#include <iostream>
using namespace std;

int main(){

    long sum, sum2, sum3, sum4, sum5, arr[5];
    sum = sum2 = sum3 = sum4 = sum5 =0;

    // ADDITION OF VALUES
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        if(i == 0){
            continue;
        } else{
            sum += arr[i];
        }
    }

    for(int i = 0; i < 5; i++){
        if(i == 1){
            continue;
        } else{
            sum2 += arr[i];
        }
    }

     for(int i = 0; i < 5; i++){
        if(i == 2){
            continue;
        } else{
            sum3 += arr[i];
        }
    }

     for(int i = 0; i < 5; i++){
        if(i == 3){
            continue;
        } else{
            sum4 += arr[i];
        }
    }

     for(int i = 0; i < 5; i++){
        if(i == 4){
            continue;
        } else{
            sum5 += arr[i];
        }
    }

    // GETTING MINIMUM SUM
    if(sum < sum2){
        if(sum < sum3){
            if(sum < sum4){
                if(sum < sum5){
                    cout << sum << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 < sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        } else{
            if(sum3 < sum4){
                if(sum3 < sum5){
                    cout << sum3 << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 < sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        }
    } else{
        if(sum2 < sum3){
            if(sum2 < sum4){
                if(sum2 < sum5){
                    cout << sum2 << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 < sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        } else{
            if(sum3 < sum4){
                if(sum3 < sum5){
                    cout << sum3 << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 < sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        }
    }

    // GETTING MAXIMUM SUM
    if(sum > sum2){
        if(sum > sum3){
            if(sum > sum4){
                if(sum > sum5){
                    cout << sum << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 > sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        } else{
            if(sum3 > sum4){
                if(sum3 > sum5){
                    cout << sum3 << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 > sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        }
    } else{
        if(sum2 > sum3){
            if(sum2 > sum4){
                if(sum2 > sum5){
                    cout << sum2 << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 > sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        } else{
            if(sum3 > sum4){
                if(sum3 > sum5){
                    cout << sum3 << " ";
                } else{
                    cout << sum5 << " ";
                }
            } else{
                if(sum4 > sum5){
                    cout << sum4 << " ";
                } else{
                    cout << sum5 << " ";
                }
            }
        }
    }

    return 0;
} // 2063136757 2744467344

