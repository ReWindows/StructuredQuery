#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 27 member(s).
namespace StructuredQuery1 {
class SchemaProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntity@SchemaProcessor@StructuredQuery1@@UEAAJPEAUIConstantString@2@PEAUIEntityInfo@2@AEBU_GUID@@PEAPEAX@Z
    virtual long AddEntity(WindissectOpaque *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMetaData@SchemaProcessor@StructuredQuery1@@UEAAJPEB_W0@Z
    virtual long AddMetaData(wchar_t const *, wchar_t const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SchemaProcessor@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSyntaxElement@SchemaProcessor@StructuredQuery1@@UEAAJPEAUIConstantString@2@JAEBU_GUID@@PEAPEAX@Z
    virtual long AddSyntaxElement(WindissectOpaque *, long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ambiguate@SchemaProcessor@StructuredQuery1@@UEAAJXZ
    virtual long Ambiguate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SchemaProcessor@StructuredQuery1@@SAJKAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSchemaBinary@SchemaProcessor@StructuredQuery1@@UEAAJPEAPEAVSchemaBinary@SemanticsUM@@@Z
    virtual long CreateSchemaBinary(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@SchemaProcessor@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntity@SchemaProcessor@StructuredQuery1@@UEAAJPEAUIConstantString@2@AEBU_GUID@@PEAPEAX@Z
    virtual long GetEntity(WindissectOpaque *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SchemaProcessor@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceEntity@SchemaProcessor@StructuredQuery1@@UEAAJPEAUIConstantString@2@AEBU_GUID@@PEAPEAX@Z
    virtual long ReferenceEntity(WindissectOpaque *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SchemaProcessor@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFragmentsAndTrie1@SchemaProcessor@StructuredQuery1@@AEAAJPEAVSchemaStore@2@@Z
    long CreateFragmentsAndTrie1(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFragmentsAndTrie2@SchemaProcessor@StructuredQuery1@@AEAAJPEAVSchemaStore@2@@Z
    long CreateFragmentsAndTrie2(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFragmentsAndTrie3@SchemaProcessor@StructuredQuery1@@AEAAJPEAVSchemaStore@2@@Z
    long CreateFragmentsAndTrie3(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexAndAllValues@SchemaProcessor@StructuredQuery1@@AEAAJPEAUIHashtable@2@AEBU_GUID@@PEAPEAX12@Z
    long GetIndexAndAllValues(WindissectOpaque *, _GUID const &, void * *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupEntity@SchemaProcessor@StructuredQuery1@@AEAAJPEB_WAEBU_GUID@@PEAPEAX@Z
    long LookupEntity(wchar_t const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare0@SchemaProcessor@StructuredQuery1@@AEAAJPEAVSchemaStore@2@@Z
    long Prepare0(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare1@SchemaProcessor@StructuredQuery1@@AEAAJPEAVSchemaStore@2@@Z
    long Prepare1(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare2@SchemaProcessor@StructuredQuery1@@AEAAJPEAVSchemaStore@2@@Z
    long Prepare2(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefEntity@SchemaProcessor@StructuredQuery1@@AEAAJPEAUIConstantString@2@HPEAPEAUIEntityInfo@2@@Z
    long RefEntity(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SchemaProcessor@StructuredQuery1@@AEAA@KPEAVCultureState@SemanticsUM@@PEAUIHashtable@1@1PEAUIList@1@@Z
    SchemaProcessor(unsigned long, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteGlobalMetaData@SchemaProcessor@StructuredQuery1@@AEAAJPEAVSchemaStore@2@@Z
    long WriteGlobalMetaData(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SchemaProcessor@StructuredQuery1@@AEAA@XZ
    ~SchemaProcessor();
};
} // namespace StructuredQuery1
