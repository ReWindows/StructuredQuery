#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
namespace StructuredQuery1 {
class StringSqueezer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StringSqueezer@StructuredQuery1@@SAJPEAUIHashtable@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@StringSqueezer@StructuredQuery1@@QEAA_KPEAUIConstantString@2@@Z
    uint64_t IndexOf(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@StringSqueezer@StructuredQuery1@@QEAAJ_KPEA_W@Z
    long Populate(uint64_t, wchar_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate@StringSqueezer@StructuredQuery1@@QEAAJPEAUIConstantString@2@PEA_WKPEAPEB_W@Z
    long Translate(WindissectOpaque *, wchar_t *, unsigned long, wchar_t const * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StringSqueezer@StructuredQuery1@@QEAA@XZ
    ~StringSqueezer();
};
} // namespace StructuredQuery1
