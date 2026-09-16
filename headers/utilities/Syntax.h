#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
namespace SemanticsUM {
class Syntax {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClass@Syntax@SemanticsUM@@SA?AW4CHARACTER_EQUIVALENCE_CLASS@2@_WG00@Z
    static int GetClass(wchar_t, unsigned short, wchar_t, wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBeginQuote@Syntax@SemanticsUM@@SA_N_KPEB_WK@Z
    static bool IsBeginQuote(uint64_t, wchar_t const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColon@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsColon(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDoubleQuote@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsDoubleQuote(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndQuote@Syntax@SemanticsUM@@SA_N_KPEB_WKH@Z
    static bool IsEndQuote(uint64_t, wchar_t const *, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormattingCharacter@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsFormattingCharacter(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullStop@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsFullStop(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParenthesis@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsParenthesis(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQuestionMark@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsQuestionMark(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReverseSolidus@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsReverseSolidus(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStar@Syntax@SemanticsUM@@SA_N_W@Z
    static bool IsStar(wchar_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuoteIsPartOfHebrewNumber@Syntax@SemanticsUM@@SA_N_KPEB_WK@Z
    static bool QuoteIsPartOfHebrewNumber(uint64_t, wchar_t const *, unsigned long);
};
} // namespace SemanticsUM
