/*
* @file <========================.cpp>
*
* @author  <Alejandro Toledano>
* @version <1.0>
*
* change log
* name      date
*
*
* [file, auther, version, and change log are not necessary with
*    modern source code management system]
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < ====================================================================== >
*
*
* @section LICENSE
*  <any necessary attributions>
*
*  Copyright 2019
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {

	srand(time(NULL)); //seed rand
	int a, b, c; //integers to randomize each list
	const int sizeOfArray = 50; //size of arrays to set later at the creation
	const int numOfInsults = 10; //number of insults to be generated

	std::string firstList[sizeOfArray] = {
"artless", "bawdy", "beslubbering", "bootless", "churlish",
"cockered", "clouted", "craven", "currish", "dankish",
"dissembling", "droning", "errant", "fawning", "fobbing",
"froward", "frothy", "gleeking", "goatish", "gorbellied",
"impertinent", "infectious", "jarring", "loggerheaded", "lumpish",
"mammering", "mangled", "mewling", "paunchy", "pribbling", "puking",
"puny", "quailing", "rank", "reeky", "roguish", "ruttish", "saucy",
"spleeny", "spongy", "surly", "tottering", "unmuzzled", "vain", "venomed",
"villainous", "warped", "wayward", "weedy", "yeasty"
	};

	std::string secondList[sizeOfArray] = {
"base-court","bat-fowling","beef-witted","beetle-headed","boil-brained",
"clapper-clawed","clay-brained","common-kissing","crook-pated",
"dismal-dreaming","dizzy-eyed","doghearted","dread-bolted","earth-vexing",
"elf-skinned","fat-kidneyed","fen-sucked","flap-mouthed","fly-bitten",
"folly-fallen","fool-born","full-gorged","guts-griping","half-faced",
"hasty-witted","hedge-born","hell-hated","idle-headed","ill-breeding",
"ill-nurtured","knotty-pated","milk-livered","motley-minded","onion-eyed",
"plume-plucked","pottle-deep","pox-marked","reeling-ripe","rough-hewn",
"rude-growing","rump-fed","shard-borne","sheep-biting","spur-galled",
"swag-bellied","tardy-gaited","tickle-brained","toad-spotted","urchin-snouted",
"weather-bitten"
	};

	std::string thirdList[sizeOfArray] = {
"apple-john","baggage","barnacle","bladder","boar-pig","bugbear",
"bum-bailey","canker-blossom","clack-dish","clotpole","coxcomb",
"codpiece","death-token","dewberry","flap-dragon","flax-wench","flirt-gill",
"foot-licker","fustilarian","giglet","gudgeon","haggard","harpy","hedge-pig",
"horn-beast","hugger-mugger","jolthead","lewdster","lout",
"maggot-pie","malt-worm","mammet","measle","minnow","miscreant","moldwarp",
"mumble-news","nut-hook","pigeon-egg","pignut","puttock","pumpion","ratsbane",
"scut","skainsmate","strumpet","varlet","vassal","whey-face","wagtail"
	};

	/*
	JUST FOR CHECKING THAT THE ARRAYS ARE CORRECTLY CODED
	for (size_t i = 0; i < sizeOfArray; i++) {
		std::cout << "Thou " <<firstList[i] << " " << secondList[i] << " "<< thirdList[i] << "." << std::endl;
	}
	*/

	for (size_t i = 0; i < numOfInsults; i++) { //starting the loop to print the amount of insults asked

		a = rand() % 50; //randomizing first list
		b = rand() % 50; //randomizing second list
		c = rand() % 50; //randomizing third list

		std::cout << "Thou " << firstList[a] << " " << secondList[b] << " " << thirdList[c] << "." << std::endl; //printing the insults together
	}
}