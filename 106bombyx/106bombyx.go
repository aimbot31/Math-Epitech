/*
** EPITECH PROJECT, 2017
** 106bombyx.go
** File description:
** florian.davasse@epitech.eu
*/

package main

import ("os")

func check_args() (int, int, int, int) {
	if len(os.Args) != 5 {
		os.Exit(84)
	}
	for i := 1; i < len(os.Args); i++ {
		if !isInt(os.Args[i]) {
			os.Exit(84)
		}
	}
	return 1, 1, 1, 1
}

func main() {
	n, k, i0, i1 := check_args()
	println(n, k, i0, i1)
}
