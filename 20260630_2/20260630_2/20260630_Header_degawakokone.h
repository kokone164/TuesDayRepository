#pragma once

const int BLACKJACK = 21;
const int CARD = 11;

void AddCard(int& card);
void BrackJack(int player, int cpu);
void Burst(int& player, int& cpu);