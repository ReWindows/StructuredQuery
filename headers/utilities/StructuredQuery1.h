#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 140 member(s).
class StructuredQuery1 {
public:
    class AmbiguationKey;
    class AttributeEnumerator;
    class AttributeList;
    class AttributePair;
    class BaseCondition;
    class BooleanConditionGenerator;
    class CBitsToStringsTransformer;
    class CConditionHistory;
    class CSchemaFromPropertySystem;
    class CStructuredQueryHelper;
    class CWordSinkWrapper;
    class CompoundCondition;
    class ConditionEvaluator;
    class ConditionGroupManager;
    class ConstantNumber;
    class ConstantString;
    class DateTimeConditionGenerator;
    class DefaultMostRelevantPropertiesList;
    class DefaultPropertyList;
    class Entity;
    class EntityInfo;
    class EnumerateStaticVARIANTs;
    class FilePathQueryGenerator;
    class FloatingPointConditionGenerator;
    class FragmentInfo;
    class Hashtable;
    class IndicatorInfo;
    class IntegerConditionGenerator;
    class Interval;
    class KindNamedEntityHandler;
    class KindTokenInformation;
    class LeafCondition;
    class LinkedListOfHitRanges;
    class List;
    class MetaData;
    class MetaDataInfo;
    class MnemonicsCollection;
    class NamedEntity;
    class NamedEntityCollector;
    class NamedEntityInfo;
    class NegationCondition;
    class NullConditionGenerator;
    class ParseError;
    class ParseErrorEnumerator;
    class ParseTracer;
    class PathNodeInfo;
    class PseudoPropertyList;
    class QueryExpressionCustomization;
    class QueryLatticeBuilder;
    class QueryParser;
    class QueryParserManager;
    class QueryWordNode;
    class RatingNamedEntityHandler;
    class Relationship;
    class RelationshipInfo;
    class RestrictionInfo;
    class SchemaProcessor;
    class SchemaStore;
    class ScopeTransformer;
    class SemanticSearchParameters;
    class SimpleConditionGenerator;
    class Solution;
    class SourceWordSink;
    class SqlGenerator;
    class StringRangeNamedEntityHandler;
    class StringSqueezer;
    class SyntaxElementInfo;
    class TokenCollection;
    class TokenInformation;
    class TokenInformationComplete;
    class Tokenizer;
    class TokenizerWordSink;
    class TransformListNode;
    class Trie;
    class TrieNodeInfo;
    class TypeHandlerList;
    class VariablePropertyCompareWithConstantValueGenerator;
    class VirtualPropertyConjunctSeeker;
    class VirtualPropertyMap;
    class WordList;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdaptValueIfPossible@StructuredQuery1@@YAJGW4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@_NPEAU3@@Z
    long AdaptValueIfPossible(unsigned short, int, tagPROPVARIANT const &, bool, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndicator@StructuredQuery1@@YAJPEAUIIndicatorInfo@1@PEAUIList@1@@Z
    long AddIndicator(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPhrases@StructuredQuery1@@YAJPEAUIList@1@PEAUIFragmentInfo@1@PEAVTrie@1@PEAUIHashtable@1@@Z
    long AddPhrases(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CConditionHistory_CreateInstance@StructuredQuery1@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long CConditionHistory_CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRangeInfoArray@StructuredQuery1@@YAXIPEAURANGE_INFO@1@@Z
    void ClearRangeInfoArray(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStringArray@StructuredQuery1@@YAXKPEAPEA_W@Z
    void ClearStringArray(unsigned long, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoAllocStringLowercased@StructuredQuery1@@YAJPEB_WKPEAPEA_W@Z
    long CoAllocStringLowercased(wchar_t const *, unsigned long, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompoundCondition_CreateInstance@StructuredQuery1@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long CompoundCondition_CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySemanticSearchParameters@StructuredQuery1@@YAJPEAUICondition@@0@Z
    long CopySemanticSearchParameters(ICondition *, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStringToCppHeap@StructuredQuery1@@YAJPEB_WPEAPEA_W@Z
    long CopyStringToCppHeap(wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStringToCppHeapN@StructuredQuery1@@YAJPEB_W_KPEAPEA_W@Z
    long CopyStringToCppHeapN(wchar_t const *, uint64_t, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTimeZoneInfo@StructuredQuery1@@YAJPEBU_TIME_ZONE_INFORMATION@@PEAPEAU2@@Z
    long CopyTimeZoneInfo(_TIME_ZONE_INFORMATION const *, _TIME_ZONE_INFORMATION * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyWithoutFormatCharacters@StructuredQuery1@@YAJPEB_WPEAPEA_W@Z
    long CopyWithoutFormatCharacters(wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyWithoutFormatCharactersN@StructuredQuery1@@YAJPEB_W_KPEAPEA_WPEA_K@Z
    long CopyWithoutFormatCharactersN(wchar_t const *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Count@StructuredQuery1@@YAJPEAUIEnumUnknown@@PEAK@Z
    long Count(IEnumUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLeafConditionUsingContentLocale@StructuredQuery1@@YAJPEAUIConditionFactory@@PEB_WW4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@PEAUIRichChunk@@44PEAPEAUICondition@@@Z
    long CreateLeafConditionUsingContentLocale(IConditionFactory *, wchar_t const *, int, tagPROPVARIANT const &, IRichChunk *, IRichChunk *, IRichChunk *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSchemaBinaryFromPropertySystem@StructuredQuery1@@YAJKPEAUILanguageResourcePool@@PEAPEAVSchemaBinary@SemanticsUM@@@Z
    long CreateSchemaBinaryFromPropertySystem(unsigned long, ILanguageResourcePool *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecideLimit@StructuredQuery1@@YAX_NW4LIMIT_PREFERENCE@1@W4tagINTERVAL_LIMIT_KIND@@PEBUtagPROPVARIANT@@23PEAW43@PEAU4@@Z
    void DecideLimit(bool, int, int, tagPROPVARIANT const *, int, tagPROPVARIANT const *, int *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecidePreferredPhrase@StructuredQuery1@@YAJPEAUIList@1@PEAUIConstantString@1@KPEAUIHashtable@1@AEBU_GUID@@PEAPEAX@Z
    long DecidePreferredPhrase(WindissectOpaque *, WindissectOpaque *, unsigned long, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhraseCommon@StructuredQuery1@@YAJPEB_WW4DEFAULT_PHRASE_FLAGS@1@PEAPEA_W@Z
    long DefaultPhraseCommon(wchar_t const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhraseForBasicType@StructuredQuery1@@YAJGPEAUIEntity@@_NW4VALUE_NORMALIZATION_STYLE@1@W4PROPDESC_FORMAT_FLAGS@@PEB_W4PEAPEA_W@Z
    long DefaultPhraseForBasicType(unsigned short, IEntity *, bool, int, int, wchar_t const *, wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhraseFromNamedEntity@StructuredQuery1@@YAJPEBVEntity@SemanticsUM@@PEB_WW4RESTATEMENT_OPTIONS@@PEAUIConditionGenerator@@PEAPEA_W@Z
    long DefaultPhraseFromNamedEntity(WindissectOpaque const *, wchar_t const *, int, IConditionGenerator *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteVirtualPropertyInfoArray@StructuredQuery1@@YAXPEAPEAUVIRTUAL_PROPERTY_INFO@1@PEAK@Z
    void DeleteVirtualPropertyInfoArray(WindissectOpaque * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@StructuredQuery1@@YAJPEAUIUnknown@@PEAX_K22@Z
    long Display(IUnknown *, void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesBlurbNeedQuotes@StructuredQuery1@@YA?AW4VALUE_NORMALIZATION_RESULT@1@PEB_W@Z
    int DoesBlurbNeedQuotes(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluatePropertyAs@StructuredQuery1@@YAXAEBU_tagpropertykey@@PEAU2@@Z
    void EvaluatePropertyAs(_tagpropertykey const &, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandVirtualProperty@StructuredQuery1@@YAJAEBU_tagpropertykey@@PEBU2@KPEAUICondition2@@PEAUIConditionFactory2@@AEBU_GUID@@PEAPEAX@Z
    long ExpandVirtualProperty(_tagpropertykey const &, _tagpropertykey const *, unsigned long, ICondition2*, IConditionFactory2*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractWords@StructuredQuery1@@YAJPEBVTokenUM@SemanticsUM@@KKKPEAUOneWord@1@KPEAK@Z
    long ExtractWords(WindissectOpaque const *, unsigned long, unsigned long, unsigned long, WindissectOpaque *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTheTokenSpan@StructuredQuery1@@YAJKKPEAUITokenCollection@@PEAK1@Z
    long FindTheTokenSpan(unsigned long, unsigned long, ITokenCollection *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatToFile@StructuredQuery1@@YAJPEAXIPEB_WPEAD@Z
    long FormatToFile(void *, unsigned int, wchar_t const *, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatToFile@StructuredQuery1@@YAJPEAXPEB_WZZ
    long FormatToFile(void *, wchar_t const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateForBasicType@StructuredQuery1@@YAJG_NPEB_WW4tagCONDITION_OPERATION@@11PEAUIRichChunk@@33PEAUIConditionFactory@@PEAPEAUICondition@@@Z
    long GenerateForBasicType(unsigned short, bool, wchar_t const *, int, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, IConditionFactory *, ICondition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComparisonInfoEx@StructuredQuery1@@YAJPEAUICondition@@PEAU_tagpropertykey@@PEAW4tagCONDITION_OPERATION@@PEAUtagPROPVARIANT@@@Z
    long GetComparisonInfoEx(ICondition *, _tagpropertykey *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionFullTextInfo@StructuredQuery1@@YAJPEAUIObjectArray@@PEA_N1PEAI@Z
    long GetConditionFullTextInfo(IObjectArray *, bool *, bool *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionFullTextInfoRec@StructuredQuery1@@YAJPEAUICondition2@@PEA_N1PEAI@Z
    long GetConditionFullTextInfoRec(ICondition2*, bool *, bool *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionPropertyNameFromKey@StructuredQuery1@@YAJAEBU_tagpropertykey@@PEAPEA_W@Z
    long GetConditionPropertyNameFromKey(_tagpropertykey const &, wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitializedWordBreakerForLocaleName@StructuredQuery1@@YAJPEB_WW4WORDBREAKERFLAGS@@PEAUILanguageResourcePool@@AEBU_GUID@@PEAPEAX@Z
    long GetInitializedWordBreakerForLocaleName(wchar_t const *, int, ILanguageResourcePool *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyFromConditionPropertyName@StructuredQuery1@@YAJPEB_WPEAU_tagpropertykey@@@Z
    long GetKeyFromConditionPropertyName(wchar_t const *, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLengthIncludingFormatCharacters@StructuredQuery1@@YA_KPEB_W_KK@Z
    uint64_t GetLengthIncludingFormatCharacters(wchar_t const *, uint64_t, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetList@StructuredQuery1@@YAJPEAUIUnknown@@PEAUIHashtable@1@AEBU_GUID@@PEAPEAX@Z
    long GetList(IUnknown *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocale@StructuredQuery1@@YAJPEAUICondition@@PEAPEA_W@Z
    long GetLocale(ICondition *, wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMostRecentParsedConditionRecursively@StructuredQuery1@@YAJPEAUICondition@@W4GET_PARSED_CONDITIONS_OPTIONS@@PEAU_FILETIME@@@Z
    long GetMostRecentParsedConditionRecursively(ICondition *, int, _FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParsedConditionsRecursively@StructuredQuery1@@YAJPEAUICondition@@W4GET_PARSED_CONDITIONS_OPTIONS@@KAEBU_GUID@@PEAPEAXPEAPEA_W4PEAKPEBU_FILETIME@@23PEAVSolution@1@@Z
    long GetParsedConditionsRecursively(ICondition *, int, unsigned long, _GUID const &, void * *, wchar_t * *, wchar_t * *, unsigned long *, _FILETIME const *, _GUID const &, void * *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParsedQueryRoot@StructuredQuery1@@YAJPEAUICondition@@W4GET_PARSED_CONDITIONS_OPTIONS@@PEAPEAUIConditionHistory@@@Z
    long GetParsedQueryRoot(ICondition *, int, IConditionHistory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuotePrefixStatus@StructuredQuery1@@YAHPEAUIRichChunk@@@Z
    int GetQuotePrefixStatus(IRichChunk *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRankableSubConditionCount@StructuredQuery1@@YAIPEAUIObjectArray@@I@Z
    unsigned int GetRankableSubConditionCount(IObjectArray *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValues@StructuredQuery1@@YAJGPEB_W0PEAW4tagINTERVAL_LIMIT_KIND@@PEAUtagPROPVARIANT@@12PEA_N@Z
    long GetValues(unsigned short, wchar_t const *, wchar_t const *, int *, tagPROPVARIANT *, int *, tagPROPVARIANT *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasConditionHistory@StructuredQuery1@@YAHPEAUICondition@@@Z
    int HasConditionHistory(ICondition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnywhereProperty@StructuredQuery1@@YA_NAEBU_tagpropertykey@@@Z
    bool IsAnywhereProperty(_tagpropertykey const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentProcessAppContainer@StructuredQuery1@@YA_NXZ
    bool IsCurrentProcessAppContainer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInArray@StructuredQuery1@@YA_NKKPEAV?$GrowableBuffer@UtagHITRANGE@@@@@Z
    bool IsInArray(unsigned long, unsigned long, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNamedEntity@StructuredQuery1@@YAHPEB_WK@Z
    int IsNamedEntity(wchar_t const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNegativeValue@StructuredQuery1@@YA_NAEBUtagPROPVARIANT@@@Z
    bool IsNegativeValue(tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPathSeparator@StructuredQuery1@@YA_N_W@Z
    bool IsPathSeparator(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRankableConjunctiveClause@StructuredQuery1@@YA_NPEAUICondition2@@@Z
    bool IsRankableConjunctiveClause(ICondition2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRankableLeaf@StructuredQuery1@@YA_NPEAUICondition2@@@Z
    bool IsRankableLeaf(ICondition2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSubconditionRankable@StructuredQuery1@@YA_NPEAUICondition@@PEAPEAUICondition2@@@Z
    bool IsSubconditionRankable(ICondition *, ICondition2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrueFalseCondition@StructuredQuery1@@YA_NPEAUICondition2@@PEA_N@Z
    bool IsTrueFalseCondition(ICondition2*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeafCondition_CreateInstance@StructuredQuery1@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long LeafCondition_CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadConditionFromXml@StructuredQuery1@@YAJPEAUIXMLDOMNode@@AEBU_GUID@@PEAPEAX@Z
    long LoadConditionFromXml(IXMLDOMNode *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeConditionEnumerator@StructuredQuery1@@YAJPEAPEAUICondition@@KAEBU_GUID@@PEAPEAX@Z
    long MakeConditionEnumerator(ICondition * *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeConditionEnumerator@StructuredQuery1@@YAJPEAUIObjectArray@@AEBU_GUID@@PEAPEAX@Z
    long MakeConditionEnumerator(IObjectArray *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeNamedEntityCanonicalName@StructuredQuery1@@YAJPEB_W0PEAPEA_W@Z
    long MakeNamedEntityCanonicalName(wchar_t const *, wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakePhraseString@StructuredQuery1@@YAJPEBUOneWord@1@KPEB_WPEAPEA_W@Z
    long MakePhraseString(WindissectOpaque const *, unsigned long, wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MentionsRankingProperty@StructuredQuery1@@YAHPEAUICondition2@@@Z
    int MentionsRankingProperty(ICondition2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MixedSort@StructuredQuery1@@YAX_KPEAPEAUIComparable@1@PEA_K00@Z
    void MixedSort(uint64_t, WindissectOpaque * *, uint64_t *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MyRefill@StructuredQuery1@@YAJPEAUtagTEXT_SOURCE@@@Z
    long MyRefill(tagTEXT_SOURCE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegationCondition_CreateInstance@StructuredQuery1@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long NegationCondition_CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NodeTypeElement@StructuredQuery1@@YAPEB_WW4tagCONDITION_TYPE@@@Z
    wchar_t const * NodeTypeElement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NullTerminateOutputBuffer@StructuredQuery1@@YAJPEA_W_K@Z
    long NullTerminateOutputBuffer(wchar_t *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OccursIn@StructuredQuery1@@YAHPEAUICondition@@0@Z
    int OccursIn(ICondition *, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationFromString@StructuredQuery1@@YAJPEB_WPEAW4tagCONDITION_OPERATION@@@Z
    long OperationFromString(wchar_t const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationText@StructuredQuery1@@YAPEB_WW4tagCONDITION_OPERATION@@@Z
    wchar_t const * OperationText(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseKeywords@StructuredQuery1@@YAJPEB_WPEAVTokenizer@1@PEAPEAPEA_WPEAK@Z
    long ParseKeywords(wchar_t const *, WindissectOpaque *, wchar_t * * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateSchemaBinary@StructuredQuery1@@YAJPEAVSchemaStore@1@PEAPEAVSchemaBinary@SemanticsUM@@@Z
    long PopulateSchemaBinary(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareProperty@StructuredQuery1@@YAJAEBU_tagpropertykey@@PEAU2@PEAG@Z
    long PrepareProperty(_tagpropertykey const &, _tagpropertykey *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushRestartPoint@StructuredQuery1@@YAJHHAEAPEAURestartPoint@1@@Z
    long PushRestartPoint(int, int, WindissectOpaque * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPROPVARIANT@StructuredQuery1@@YAJPEAUIStream@@PEAUtagPROPVARIANT@@@Z
    long ReadPROPVARIANT(IStream *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPWSTR@StructuredQuery1@@YAJPEAUIStream@@PEAPEA_W@Z
    long ReadPWSTR(IStream *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestatementStringCchCopy@StructuredQuery1@@YAJPEA_W_KPEB_WPEAPEA_WPEA_K@Z
    long RestatementStringCchCopy(wchar_t *, uint64_t, wchar_t const *, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveConditionToXml@StructuredQuery1@@YAJPEAUIXMLDOMNode@@PEAUICondition@@@Z
    long SaveConditionToXml(IXMLDOMNode *, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveToStream@StructuredQuery1@@YAJPEAUIPersistStream@@PEAUIStream@@@Z
    long SaveToStream(IPersistStream *, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SemanticSearchParameters_CreateInstance@StructuredQuery1@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long SemanticSearchParameters_CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizePROPVARIANT@StructuredQuery1@@YAJAEBUtagPROPVARIANT@@PEAT_ULARGE_INTEGER@@@Z
    long SizePROPVARIANT(tagPROPVARIANT const &, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizePWSTR@StructuredQuery1@@YAKPEB_W@Z
    unsigned long SizePWSTR(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeTokenInformation@StructuredQuery1@@YAJPEAUIRichChunk@@PEAT_ULARGE_INTEGER@@@Z
    long SizeTokenInformation(IRichChunk *, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Substitute@StructuredQuery1@@YAJAEBU_tagpropertykey@@0PEAUICondition2@@PEAUIConditionFactory2@@AEBU_GUID@@PEAPEAX@Z
    long Substitute(_tagpropertykey const &, _tagpropertykey const &, ICondition2*, IConditionFactory2*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TermBehavior@StructuredQuery1@@YA?AW4TERM_BEHAVIOR@1@W4SQL_GENERATION_OPTIONS@@K_N@Z
    int TermBehavior(int, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TotalSubsToWrite@StructuredQuery1@@YAJPEAUCONDITION_GROUP@1@KPEAK@Z
    long TotalSubsToWrite(WindissectOpaque *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSemanticSearchParameters@StructuredQuery1@@YAJPEAUICondition@@PEAPEAUISemanticSearchParameters@@@Z
    long TryGetSemanticSearchParameters(ICondition *, ISemanticSearchParameters * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSemanticSearchParametersFromTree@StructuredQuery1@@YAJPEAUIObjectArray@@PEAPEAUISemanticSearchParameters@@@Z
    long TryGetSemanticSearchParametersFromTree(IObjectArray *, ISemanticSearchParameters * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueFromString@StructuredQuery1@@YAJPEB_WAEBU_tagpropertykey@@GPEAUtagPROPVARIANT@@@Z
    long ValueFromString(wchar_t const *, _tagpropertykey const &, unsigned short, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueNormalization@StructuredQuery1@@YAJPEBUtagPROPVARIANT@@W4VALUE_NORMALIZATION_STYLE@1@W4PROPDESC_FORMAT_FLAGS@@PEA_W_KPEAPEA_WPEA_K@Z
    long ValueNormalization(tagPROPVARIANT const *, int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueNormalization@StructuredQuery1@@YAJPEBUtagPROPVARIANT@@W4VALUE_NORMALIZATION_STYLE@1@W4PROPDESC_FORMAT_FLAGS@@PEAW4VALUE_NORMALIZATION_RESULT@1@PEA_W_KPEAPEA_WPEA_K@Z
    long ValueNormalization(tagPROPVARIANT const *, int, int, int *, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueNormalization@StructuredQuery1@@YAJPEBUtagPROPVARIANT@@W4VALUE_NORMALIZATION_STYLE@1@W4PROPDESC_FORMAT_FLAGS@@PEAW4VALUE_NORMALIZATION_RESULT@1@PEAPEA_W@Z
    long ValueNormalization(tagPROPVARIANT const *, int, int, int *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBeginPhrase@StructuredQuery1@@YAJW4TERM_BEHAVIOR@1@PEA_W_KPEAPEA_WPEA_K@Z
    long WriteBeginPhrase(int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteContains@StructuredQuery1@@YAJPEB_WPEBUPHRASE_QUERY_RECORD@1@KW4TERM_BEHAVIOR@1@_NK0PEA_W_KPEAPEA_WPEA_K@Z
    long WriteContains(wchar_t const *, WindissectOpaque const *, unsigned long, int, bool, unsigned long, wchar_t const *, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteContainsSemantic@StructuredQuery1@@YAJPEA_W_KPEB_W22KPEAPEA_WPEA_K@Z
    long WriteContainsSemantic(wchar_t *, uint64_t, wchar_t const *, wchar_t const *, wchar_t const *, unsigned long, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteContents@StructuredQuery1@@YAJPEB_WKPEA_W_KPEAPEA_WPEA_K@Z
    long WriteContents(wchar_t const *, unsigned long, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteContentsWithQuotes@StructuredQuery1@@YAJPEB_WW4TERM_BEHAVIOR@1@PEA_W_KPEAPEA_WPEA_K@Z
    long WriteContentsWithQuotes(wchar_t const *, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndPhrase@StructuredQuery1@@YAJW4TERM_BEHAVIOR@1@PEA_W_KPEAPEA_WPEA_K@Z
    long WriteEndPhrase(int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFreeText@StructuredQuery1@@YAJPEB_WPEBUPHRASE_QUERY_RECORD@1@KW4TERM_BEHAVIOR@1@KPEA_W_KPEAPEA_WPEA_K@Z
    long WriteFreeText(wchar_t const *, WindissectOpaque const *, unsigned long, int, unsigned long, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFullTextDeep@StructuredQuery1@@YAJHPEB_WPEBUVIRTUAL_PROPERTY_INFO@1@KW4SQL_GENERATION_OPTIONS@@W4WriteFullTextOptions@1@HPEAUIObjectArray@@_N0PEA_W_KPEAPEA_WPEA_K@Z
    long WriteFullTextDeep(int, wchar_t const *, WindissectOpaque const *, unsigned long, int, int, int, IObjectArray *, bool, wchar_t const *, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFullTextDeepRec@StructuredQuery1@@YAJPEAUICondition2@@HKW4SQL_GENERATION_OPTIONS@@W4WriteFullTextOptions@1@PEA_W_KPEAPEA_WPEA_K@Z
    long WriteFullTextDeepRec(ICondition2*, int, unsigned long, int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMergeStrategy@StructuredQuery1@@YAJPEA_W_KW4tagMERGE_STRATEGY@@PEAPEA_WPEA_K@Z
    long WriteMergeStrategy(wchar_t *, uint64_t, int, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteNot@StructuredQuery1@@YAJPEA_W_K_NPEAPEA_WPEA_K@Z
    long WriteNot(wchar_t *, uint64_t, bool, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneContainsWithRanking@StructuredQuery1@@YAJPEA_W_KPEB_WPEBUPHRASE_QUERY_RECORD@1@KHW4TERM_BEHAVIOR@1@_N5W4RANKING_COERCION@1@K2PEAPEA_WPEA_K@Z
    long WriteOneContainsWithRanking(wchar_t *, uint64_t, wchar_t const *, WindissectOpaque const *, unsigned long, int, int, bool, bool, int, unsigned long, wchar_t const *, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneFormatField@StructuredQuery1@@YAJW4DATETIME_OPTIONS@@KPEA_W_KPEAPEA_WPEA_K@Z
    long WriteOneFormatField(int, unsigned long, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneFreeTextWithRanking@StructuredQuery1@@YAJPEA_W_KPEB_WPEBUPHRASE_QUERY_RECORD@1@KHW4TERM_BEHAVIOR@1@_N5W4RANKING_COERCION@1@K2PEAPEA_WPEA_K@Z
    long WriteOneFreeTextWithRanking(wchar_t *, uint64_t, wchar_t const *, WindissectOpaque const *, unsigned long, int, int, bool, bool, int, unsigned long, wchar_t const *, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneMostRelevantPropertiesContainsWithRanking@StructuredQuery1@@YAJPEA_W_KPEB_WPEBUVIRTUAL_PROPERTY_INFO@1@PEBUPHRASE_QUERY_RECORD@1@KHW4TERM_BEHAVIOR@1@_N6W4RANKING_COERCION@1@K2PEAPEA_WPEA_K@Z
    long WriteOneMostRelevantPropertiesContainsWithRanking(wchar_t *, uint64_t, wchar_t const *, WindissectOpaque const *, WindissectOpaque const *, unsigned long, int, int, bool, bool, int, unsigned long, wchar_t const *, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneRemoteAwareContainsWithRanking@StructuredQuery1@@YAJPEA_W_KPEB_WPEBUPHRASE_QUERY_RECORD@1@KHW4TERM_BEHAVIOR@1@_N5W4RANKING_COERCION@1@K2PEAPEA_WPEA_K5@Z
    long WriteOneRemoteAwareContainsWithRanking(wchar_t *, uint64_t, wchar_t const *, WindissectOpaque const *, unsigned long, int, int, bool, bool, int, unsigned long, wchar_t const *, wchar_t * *, uint64_t *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneRemoteAwareFreeTextWithRanking@StructuredQuery1@@YAJPEA_W_KPEB_WPEBUPHRASE_QUERY_RECORD@1@KHW4TERM_BEHAVIOR@1@_N5W4RANKING_COERCION@1@K2PEAPEA_WPEA_K5@Z
    long WriteOneRemoteAwareFreeTextWithRanking(wchar_t *, uint64_t, wchar_t const *, WindissectOpaque const *, unsigned long, int, int, bool, bool, int, unsigned long, wchar_t const *, wchar_t * *, uint64_t *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneRemoteAwareMostRelevantPropertiesContainsWithRanking@StructuredQuery1@@YAJPEA_W_KPEB_WPEBUVIRTUAL_PROPERTY_INFO@1@PEBUPHRASE_QUERY_RECORD@1@KHW4TERM_BEHAVIOR@1@_N6W4RANKING_COERCION@1@K2PEAPEA_WPEA_K6@Z
    long WriteOneRemoteAwareMostRelevantPropertiesContainsWithRanking(wchar_t *, uint64_t, wchar_t const *, WindissectOpaque const *, WindissectOpaque const *, unsigned long, int, int, bool, bool, int, unsigned long, wchar_t const *, wchar_t * *, uint64_t *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePROPVARIANT@StructuredQuery1@@YAJPEAUIStream@@AEBUtagPROPVARIANT@@@Z
    long WritePROPVARIANT(IStream *, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePWSTR@StructuredQuery1@@YAJPEAUIStream@@PEB_W@Z
    long WritePWSTR(IStream *, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRankByMinMaxClause@StructuredQuery1@@YAJHHPEA_W_KPEAPEA_WPEA_K@Z
    long WriteRankByMinMaxClause(int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRanking@StructuredQuery1@@YAJHHW4RANKING_COERCION@1@PEA_W_KPEAPEA_WPEA_K@Z
    long WriteRanking(int, int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRankingAppendix@StructuredQuery1@@YAJHPEA_W_KPEAPEA_WPEA_K@Z
    long WriteRankingAppendix(int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSqlString@StructuredQuery1@@YAJPEB_WW4SQL_STRING_LEVEL@1@PEA_W_KPEAPEA_WPEA_K@Z
    long WriteSqlString(wchar_t const *, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteThreeFormatFields@StructuredQuery1@@YAJW4DATETIME_OPTIONS@@K0K0KPEA_W_KPEAPEA_WPEA_K@Z
    long WriteThreeFormatFields(int, unsigned long, int, unsigned long, int, unsigned long, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddQueryWordNodeToEnd@StructuredQuery1@@YAJPEAVQueryWordNode@1@PEAUQueryWordNodeListNode@1@@Z
    long _AddQueryWordNodeToEnd(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CapabilityRequiredForResolution@StructuredQuery1@@YA?AW4CONDITION_FACTORY_CAPABILITY@1@PEAUICondition@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@@Z
    int _CapabilityRequiredForResolution(ICondition *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CapabilityRequiredForResolutionRec@StructuredQuery1@@YA?AW4CONDITION_FACTORY_CAPABILITY@1@PEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@@Z
    int _CapabilityRequiredForResolutionRec(ICondition2*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStructuredQueryHelper@StructuredQuery1@@YAJAEBU_GUID@@PEAPEAX@Z
    long _CreateStructuredQueryHelper(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteQueryWordNodeListNode@StructuredQuery1@@YAXPEAUQueryWordNodeListNode@1@H@Z
    void _DeleteQueryWordNodeListNode(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyCannotRequireMapping@StructuredQuery1@@YAHAEBU_tagpropertykey@@@Z
    int _PropertyCannotRequireMapping(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SemanticTypeFromPropVariantRec@StructuredQuery1@@YAPEB_WAEBUtagPROPVARIANT@@@Z
    wchar_t const * _SemanticTypeFromPropVariantRec(tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SemanticTypeFromVarType@StructuredQuery1@@YAPEB_WW4STRUCTURED_QUERY_RESOLVE_OPTION@@GPEB_W@Z
    wchar_t const * _SemanticTypeFromVarType(int, unsigned short, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SemanticTypeFromVarType@StructuredQuery1@@YAPEB_WG@Z
    wchar_t const * _SemanticTypeFromVarType(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldDisplayAsMultiValuedProperty@StructuredQuery1@@YAHAEBU_tagpropertykey@@@Z
    int _ShouldDisplayAsMultiValuedProperty(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteValueText@StructuredQuery1@@YAJPEA_W_KPEB_WHPEAPEA_WPEA_K@Z
    long _WriteValueText(wchar_t *, uint64_t, wchar_t const *, int, wchar_t * *, uint64_t *);
};
