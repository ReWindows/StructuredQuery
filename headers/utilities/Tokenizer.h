#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
namespace StructuredQuery1 {
class Tokenizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Tokenizer@StructuredQuery1@@QEAAJPEAUILanguageResourcePool@@@Z
    long Initialize(ILanguageResourcePool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Tokenizer@StructuredQuery1@@QEAAJPEAUIWordBreaker@@@Z
    long Initialize(IWordBreaker *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Tokenizer@StructuredQuery1@@QEAA@XZ
    ~Tokenizer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TokenizeHelper@Tokenizer@StructuredQuery1@@AEAAJPEB_WPEBGKPEBVWordList@2@PEAVTokenEmitter@2@@Z
    long TokenizeHelper(wchar_t const *, unsigned short const *, unsigned long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TokenizeWorker@Tokenizer@StructuredQuery1@@AEAAJPEB_WPEBGKPEAPEAVTokenCollectionUM@SemanticsUM@@_N@Z
    long TokenizeWorker(wchar_t const *, unsigned short const *, unsigned long, WindissectOpaque * *, bool);
};
} // namespace StructuredQuery1
