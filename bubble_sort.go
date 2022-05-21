package main

//import "fmt"

//assinatura de uma função: parâmetro, nome e retorno
//[]int -> desordenada
//[]int{} -> ordenada
func BubbleSort(lista []int) []int{

	for i := 0; i < len(lista)-1; i++ {
		for j := 0; j < len(lista)-i-1; j++ {
			
			itemAtual := lista[j]
			proximoItem := lista[j+1]
			
			if itemAtual > proximoItem{
				lista[j], lista[j+1] = lista[j+1], lista[j]
			}
		}
	}

	return lista;
}

// func main() {

	
// }

