/** @file */
#pragma once

/**
 * @brief Para zawierająca tablice typu wektor "l" zawierająca wierzchołki pierwszej grupy oraz "p" wierzchołki drugiej grupy.
 * @param kolor tablica określająca "kolory"(grupy) poszczególnych wierzchołków, 1 jeśli należy do grupy pierwszej oraz 0 jeśli do grupy drugiej.
*/
std::pair<std::vector<int>, std::vector<int>> grupuj_wierzcholki_grafu_dwudzielnego(const std::vector<int>& kolor);