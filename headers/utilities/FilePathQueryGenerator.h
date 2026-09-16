#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 11 member(s).
namespace StructuredQuery1 {
class FilePathQueryGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FilePathQueryGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FilePathQueryGenerator@StructuredQuery1@@SAJPEB_W0000AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@FilePathQueryGenerator@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateForLeaf@FilePathQueryGenerator@StructuredQuery1@@UEAAJPEAUIConditionFactory@@PEB_WW4tagCONDITION_OPERATION@@111PEAUIRichChunk@@33HPEAHPEAPEAUICondition@@@Z
    virtual long GenerateForLeaf(IConditionFactory *, wchar_t const *, int, wchar_t const *, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, int *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FilePathQueryGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FilePathQueryGenerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@FilePathQueryGenerator@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FilePathQueryGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FilePathQueryGenerator@StructuredQuery1@@QEAA@XZ
    ~FilePathQueryGenerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFilePartQuery@FilePathQueryGenerator@StructuredQuery1@@AEAAJW4FILE_PART@12@PEAUIConditionFactory@@PEB_W_NW4tagCONDITION_OPERATION@@322PEAUIRichChunk@@55PEAUIObjectCollection@@PEA_N@Z
    long AddFilePartQuery(int, IConditionFactory *, wchar_t const *, bool, int, bool, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, IObjectCollection *, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FilePathQueryGenerator@StructuredQuery1@@AEAA@PEB_W0000@Z
    FilePathQueryGenerator(wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *);
};
} // namespace StructuredQuery1
