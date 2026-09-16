#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 2 member(s).
namespace SemanticsUM {
class StructuredSemanticSolutionMaker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeStructuredSemanticSolution@StructuredSemanticSolutionMaker@SemanticsUM@@QEBAJPEB_WAEBVTokenCollectionUM@2@KKPEAUIWordBreaker@@PEAVSchemaEngine@2@PEBVSemSolution@2@PEAPEAVStructuredSemanticSolution@2@@Z
    long MakeStructuredSemanticSolution(wchar_t const *, WindissectOpaque const &, unsigned long, unsigned long, IWordBreaker *, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSemSolutionLL@StructuredSemanticSolutionMaker@SemanticsUM@@CAJPEBVSemSolution@2@PEAPEAVSemSolutionLL@2@@Z
    static long GetSemSolutionLL(WindissectOpaque const *, WindissectOpaque * *);
};
} // namespace SemanticsUM
