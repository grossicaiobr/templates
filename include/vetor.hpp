#ifndef VETOR_H
#define VETOR_H

#include <iostream>
#include <vector>
using namespace std;

template <typename Type>

class Vetor{
public:
    Vetor(int n) : _tamanho(n){}
    Vetor(const Vetor &outro_vetor) : _elementos(outro_vetor._elementos), _tamanho(outro_vetor._tamanho){}
    ~Vetor() {
        _elementos.clear();
    }


    void AdicionaElemento(Type elemento){
        if(_elementos.size() == _tamanho){
            return;
        }
        else{
            _elementos.push_back(elemento);
        }
    }
    void SetElemento(int n, Type elemento){
        _elementos.at( n ) = elemento;
    }
    Type GetElemento(int n){
        return _elementos.at(n);
    }
    void Imprime(){
        for (Type it:_elementos)
            cout << it << " ";
        cout << endl;
    }

    private:
        int _tamanho;
        vector<Type> _elementos;
};



#endif