#ifndef VETOR_H
#define VETOR_H

#include <iostream>
#include <vector>
using namespace std;

template <typename Type>

class Vetor{
public:
    Vetor(int n) : _tamanho(n) {
        _data.resize(n);
    };
    Vetor(const Vetor &outro_vetor) : _tamanho(outro_vetor._tamanho), _data(outro_vetor._data) {};
    ~Vetor() {
        for (auto it = _data.rbegin(); it != _data.rend(); it--){
            _data.pop_back();
            _tamanho --;
        } 
    };


    void AdicionaElemento(Type elemento){
        _data.push_back(elemento);
    };
    void SetElemento(int n, Type elemento){
        _data.assign(n, elemento);
    };  
    Type GetElemento(int n){
        return _data.at(n);
    };
    void Imprime(){
        for (Type it:_data)
            cout << it << " ";
        cout << endl;
    };

    private:
        int _tamanho;
        vector<Type> _data;
};



#endif