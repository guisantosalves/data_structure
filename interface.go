package main

import "fmt"
import "errors"

func somar(a, b interface{})(int, error){
	valorA, ok := a.(int)
	
	// faz a verificação se o ok nao existe (nao conseguiu fazer o parser)
	if !ok {
		return 0, errors.New("Falha ao converter a")
	}

	valorB, ok := b.(int)

	// faz a verificação se o ok nao existe (nao conseguiu fazer o parser)
	if !ok {
		return 0, errors.New("Falha ao converter B") 
	}
	
	return valorA + valorB, nil
}

func main(){
	
	resultado, err := somar(1, 2)

	if err != nil {
		fmt.Printf("Falhou: %s\n", err)
		return
	}

	fmt.Printf("%d\n",resultado)
	
}
