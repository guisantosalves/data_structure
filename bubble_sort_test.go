package main

import "testing"

func TestBubbleSort(t *testing.T){
	lista := []int{8,7,6,5,4,3,2,1}
	
	result := BubbleSort(lista)

	esperado := []int{1,2,3,4,5,6,7,8}

	for idx := range esperado{
		item1 := result[idx]
		item2 := esperado[idx]

		if item1 != item2 {
			t.Error("Lista nao ordenada")
			break
		}
	}
} 