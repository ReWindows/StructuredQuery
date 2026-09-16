#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 13 member(s).
namespace StructuredQuery1 {
class Entity {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Entity@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Base@Entity@StructuredQuery1@@UEAAJPEAPEAUIEntity@@@Z
    virtual long Base(IEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Entity@StructuredQuery1@@SAJPEBV1SemanticsUM@@_NAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque const *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@Entity@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedEntity@Entity@StructuredQuery1@@UEAAJPEB_WPEAPEAUINamedEntity@@@Z
    virtual long GetNamedEntity(wchar_t const *, INamedEntity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelationship@Entity@StructuredQuery1@@UEAAJPEB_WPEAPEAUIRelationship@@@Z
    virtual long GetRelationship(wchar_t const *, IRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MetaData@Entity@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long MetaData(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@Entity@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long Name(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NamedEntities@Entity@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long NamedEntities(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Entity@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Relationships@Entity@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Relationships(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Entity@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Entity@StructuredQuery1@@AEAA@PEBV0SemanticsUM@@_N@Z
    Entity(WindissectOpaque const *, bool);
};
} // namespace StructuredQuery1
