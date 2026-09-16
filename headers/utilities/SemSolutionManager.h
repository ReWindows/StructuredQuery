#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 11 member(s).
namespace SemanticsUM {
class SemSolutionManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SemSolutionManager@SemanticsUM@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSemSolution@SemSolutionManager@SemanticsUM@@QEAAJPEAVSemSolution@2@PEBVFragment@2@_N@Z
    long AddSemSolution(WindissectOpaque *, WindissectOpaque const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SemSolutionManager@SemanticsUM@@SAJHPEBVSchemaEngine@2@PEAVSemLite@2@_NPEAPEAV12@@Z
    static long Create(int, WindissectOpaque const *, WindissectOpaque *, bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSolution@SemSolutionManager@SemanticsUM@@QEAAPEAVSemSolution@2@H@Z
    WindissectOpaque * GetFirstSolution(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SemSolutionManager@SemanticsUM@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Recycle@SemSolutionManager@SemanticsUM@@QEAAXPEAVSemSolution@2@_N@Z
    void Recycle(WindissectOpaque *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SemSolutionManager@SemanticsUM@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSemSolution@SemSolutionManager@SemanticsUM@@AEAAXPEAVSemSolution@2@_N@Z
    void AddSemSolution(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SemSolutionManager@SemanticsUM@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSemSolution@SemSolutionManager@SemanticsUM@@AEAAJPEAVSemSolution@2@PEBVFragment@2@_NPEAPEAV32@@Z
    long MakeSemSolution(WindissectOpaque *, WindissectOpaque const *, bool, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SemSolutionManager@SemanticsUM@@AEAA@XZ
    ~SemSolutionManager();
};
} // namespace SemanticsUM
