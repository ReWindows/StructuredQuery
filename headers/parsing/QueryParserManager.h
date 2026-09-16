#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 14 member(s).
namespace StructuredQuery1 {
class QueryParserManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QueryParserManager@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@QueryParserManager@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLoadedParser@QueryParserManager@StructuredQuery1@@UEAAJPEB_WGAEBU_GUID@@PEAPEAX@Z
    virtual long CreateLoadedParser(wchar_t const *, unsigned short, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOptions@QueryParserManager@StructuredQuery1@@UEAAJHHPEAUIQueryParser@@@Z
    virtual long InitializeOptions(int, int, IQueryParser *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QueryParserManager@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QueryParserManager@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SchemaRefreshed@QueryParserManager@StructuredQuery1@@UEAAJXZ
    virtual long SchemaRefreshed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOption@QueryParserManager@StructuredQuery1@@UEAAJW4tagQUERY_PARSER_MANAGER_OPTION@@PEBUtagPROPVARIANT@@@Z
    virtual long SetOption(int, tagPROPVARIANT const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedSchemaBinaryFilePath@QueryParserManager@StructuredQuery1@@AEAAJW4_PROFILE_FOLDER_ID@@_NPEB_WG2PEA_WK@Z
    long GetLocalizedSchemaBinaryFilePath(int, bool, wchar_t const *, unsigned short, wchar_t const *, wchar_t *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadLocalizedSchema@QueryParserManager@StructuredQuery1@@AEAAJPEB_WGPEAUIQueryParser@@PEAG@Z
    long LoadLocalizedSchema(wchar_t const *, unsigned short, IQueryParser *, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryParserManager@StructuredQuery1@@AEAA@XZ
    ~QueryParserManager();
};
} // namespace StructuredQuery1
