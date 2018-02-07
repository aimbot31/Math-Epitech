/*
** EPITECH PROJECT, 2017
** test_unitaire.go
** File description:
** florent.poinsard@epitech.eu
*/

package main

import (
	"os/exec"
	"log"
	"io/ioutil"
	"fmt"
)

const RED = "\x1B[31;1m"
const WHT = "\x1B[37;1m"
const GRN = "\x1B[32;1m"
const BLU = "\x1B[34;1m"
const CYN = "\x1B[36;1m"
const RESET = "\x1B[0m"
const PATH_REFERENCE_1 = "/home/aimbot/projets_groupe/105torus_2017/bonus/reference_output_1.txt"
const PATH_REFERENCE_2 = "/home/aimbot/projets_groupe/105torus_2017/bonus/reference_output_2.txt"
const PATH_REFERENCE_3 = "/home/aimbot/projets_groupe/105torus_2017/bonus/reference_output_3.txt"

func check_errors(err_1, err_2, err_3, err_ref_1, err_ref_2, err_ref_3 error) {
	if err_1 != nil {
		log.Fatal(err_1)
	}
	if err_2 != nil {
		log.Fatal(err_2)
	}
	if err_ref_1 != nil {
		log.Fatal(err_ref_1)
	}
	if err_ref_2 != nil {
		log.Fatal(err_ref_2)
	}
	if err_3 != nil {
		log.Fatal(err_3)
	}
	if err_ref_3 != nil {
		log.Fatal(err_ref_3)
	}
}

func check_output_0(output_0 []byte, err_0 error) {
	exit_status := err_0.Error()

	fmt.Printf("%s[CHECK ERRORS]%s\n", GRN, RESET)
	if exit_status != "exit status 84" {
		fmt.Printf("%sExpected :\n%s\nBut got :\n%s%s\n", WHT, "exit status 84", exit_status, RESET)
		fmt.Printf("%s[OUTPUT DOES NOT MATCH]%s\n\n", RED, RESET)
	} else {
		fmt.Printf("%s%s%s\n", CYN, exit_status, RESET)
		fmt.Printf("%s[OUPUT MATCHES]%s\n\n", GRN, RESET)
	}
}

func check_output_1(output_1, reference_1 []byte) {
	i := 0
	error_nb := 0

	fmt.Printf("%s[CHECK 1]%s\n", GRN, RESET)
	if len(output_1) != len(reference_1) {
		fmt.Printf("%sExpected :\n%sBut got :\n%s%s", WHT, string(reference_1), string(output_1), RESET)
		fmt.Printf("%s[LENGHT OF OUTPUT DOENST MATCH]\toutput = %d / reference = %d%s\n", RED, len(output_1), len(reference_1), RESET)
	}
	for i < len(output_1) && len(output_1) == len(reference_1) {
		if (output_1[i] != reference_1[i]) {
			fmt.Printf("%s%s%s", RED, string(output_1[i]), RESET)
			error_nb++
		} else {
			fmt.Printf("%s%s%s", CYN, string(output_1[i]), RESET)
		}
		i++
	}
	if error_nb > 0 {
		fmt.Printf("%s[NUMBER OF ERROR(S)] %d%s\n", RED, error_nb, RESET)
	} else if len(output_1) == len(reference_1) {
		fmt.Printf("%s[OUTPUT MATCHES]%s\n", GRN, RESET)
	}
}

func check_output_2(output_2, reference_2 []byte) {
	i := 0
	error_nb := 0

	fmt.Printf("\n%s[CHECK 2]%s\n", GRN, RESET)
	if len(output_2) != len(reference_2) {
		fmt.Printf("%sExpected :\n%sBut got :\n%s%s", WHT, string(reference_2), string(output_2), RESET)
		fmt.Printf("%s[LENGHT OF OUTPUT DOENST MATCH]\toutput = %d / reference = %d%s\n", RED, len(output_2), len(reference_2), RESET)
	}
	for i < len(output_2) && len(output_2) == len(reference_2) {
		if (output_2[i] != reference_2[i]) {
			fmt.Printf("%s%s%s", RED, string(output_2[i]), RESET)
			error_nb++
		} else {
			fmt.Printf("%s%s%s", CYN, string(output_2[i]), RESET)
		}
		i++
	}
	if error_nb > 0 {
		fmt.Printf("%s[NUMBER OF ERROR(S)] %d%s\n", RED, error_nb, RESET)
	} else if len(output_2) == len(reference_2) {
		fmt.Printf("%s[OUTPUT MATCHES]%s\n", GRN, RESET)
	}
}

func check_output_3(output_3, reference_3 []byte) {
	i := 0
	error_nb := 0

	fmt.Printf("\n%s[CHECK 3]%s\n", GRN, RESET)
	if len(output_3) != len(reference_3) {
		fmt.Printf("%sExpected :\n%sBut got :\n%s%s", WHT, string(reference_3), string(output_3), RESET)
		fmt.Printf("%s[LENGHT OF OUTPUT DOENST MATCH]\toutput = %d / reference = %d%s\n", RED, len(output_3), len(reference_3), RESET)
	}
	for i < len(output_3) && len(output_3) == len(reference_3) {
		if (output_3[i] != reference_3[i]) {
			fmt.Printf("%s%s%s", RED, string(output_3[i]), RESET)
			error_nb++
		} else {
			fmt.Printf("%s%s%s", CYN, string(output_3[i]), RESET)
		}
		i++
	}
	if error_nb > 0 {
		fmt.Printf("%s[NUMBER OF ERROR(S)] %d%s\n", RED, error_nb, RESET)
	} else if len(output_3) == len(reference_3) {
		fmt.Printf("%s[OUTPUT MATCHES]%s\n", GRN, RESET)
	}
}

func main() {
	output_0, err_0 := exec.Command("/home/aimbot/projets_groupe/105torus_2017/105torus").Output()
	output_1, err_1 := exec.Command("/home/aimbot/projets_groupe/105torus_2017/105torus", "1", "-1", "0", "6", "-5", "1", "6").Output()
	output_2, err_2 := exec.Command("/home/aimbot/projets_groupe/105torus_2017/105torus", "2", "-1", "0", "6", "-5", "1", "12").Output()
	output_3, err_3 := exec.Command("/home/aimbot/projets_groupe/105torus_2017/105torus", "3", "-1", "0", "6", "-5", "1", "8").Output()
	reference_1, err_ref_1 := ioutil.ReadFile(PATH_REFERENCE_1)
	reference_2, err_ref_2 := ioutil.ReadFile(PATH_REFERENCE_2)
	reference_3, err_ref_3 := ioutil.ReadFile(PATH_REFERENCE_3)
	check_errors(err_1, err_2, err_3, err_ref_1, err_ref_2, err_ref_3)
	check_output_0(output_0, err_0)
	check_output_1(output_1, reference_1)
	check_output_2(output_2, reference_2)
	check_output_3(output_3, reference_3)
}
