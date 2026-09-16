#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 30 member(s).
namespace StructuredQuery1 {
class Hashtable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Hashtable@StructuredQuery1@@UEAAJPEAUIUnknown@@0@Z
    virtual long Add(IUnknown *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAndGetKey@Hashtable@StructuredQuery1@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long AddAndGetKey(IUnknown *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Hashtable@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllKeys@Hashtable@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long AllKeys(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllValues@Hashtable@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long AllValues(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Hashtable@StructuredQuery1@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsKey@Hashtable@StructuredQuery1@@UEAAJPEAUIUnknown@@PEAH@Z
    virtual long ContainsKey(IUnknown *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Count@Hashtable@StructuredQuery1@@UEAA_KXZ
    virtual uint64_t Count();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Hashtable@StructuredQuery1@@SAJW4tagHASHTABLE_STYLE@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Hashtable@StructuredQuery1@@SAJW4tagHASHTABLE_STYLE@2@_KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, uint64_t, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@Hashtable@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@Hashtable@StructuredQuery1@@UEAAJPEAUIUnknown@@PEA_K@Z
    virtual long GetIndex(IUnknown *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@Hashtable@StructuredQuery1@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetItem(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKey@Hashtable@StructuredQuery1@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetKey(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Hashtable@StructuredQuery1@@UEAAJ_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetValue(uint64_t, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@Hashtable@StructuredQuery1@@UEAA_KPEAUIUnknown@@@Z
    virtual uint64_t IndexOf(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Hashtable@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Hashtable@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sort@Hashtable@StructuredQuery1@@UEAAJXZ
    virtual long Sort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Style@Hashtable@StructuredQuery1@@UEAA?AW4tagHASHTABLE_STYLE@2@XZ
    virtual int Style();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyState@Hashtable@StructuredQuery1@@AEAAJ_KPEA_K@Z
    long CopyState(uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRoomForOneMore@Hashtable@StructuredQuery1@@AEAAJPEAH@Z
    long EnsureRoomForOneMore(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@Hashtable@StructuredQuery1@@CAPEA_KPEAUIHashable@2@_K1PEAPEAU32@PEA_K3@Z
    static uint64_t * Get(WindissectOpaque *, uint64_t, uint64_t, WindissectOpaque * *, uint64_t *, uint64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Hashtable@StructuredQuery1@@AEAA@W4tagHASHTABLE_STYLE@1@_K@Z
    Hashtable(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Put@Hashtable@StructuredQuery1@@CAXPEA_K_K0PEAUIHashable@2@PEAUIUnknown@@PEAPEAU32@PEAPEAU4@0@Z
    static void Put(uint64_t *, uint64_t, uint64_t *, WindissectOpaque *, IUnknown *, WindissectOpaque * *, IUnknown * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wipe@Hashtable@StructuredQuery1@@CAX_KPEAPEAUIHashable@2@PEAPEAUIUnknown@@PEA_K3@Z
    static void Wipe(uint64_t, WindissectOpaque * *, IUnknown * *, uint64_t *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Hashtable@StructuredQuery1@@AEAA@XZ
    ~Hashtable();
};
} // namespace StructuredQuery1
