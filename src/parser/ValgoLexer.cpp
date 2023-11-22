
// Generated from Valgo.g4 by ANTLR 4.13.1


#include "ValgoLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ValgoLexerStaticData final {
  ValgoLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ValgoLexerStaticData(const ValgoLexerStaticData&) = delete;
  ValgoLexerStaticData(ValgoLexerStaticData&&) = delete;
  ValgoLexerStaticData& operator=(const ValgoLexerStaticData&) = delete;
  ValgoLexerStaticData& operator=(ValgoLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag valgolexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ValgoLexerStaticData *valgolexerLexerStaticData = nullptr;

void valgolexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (valgolexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(valgolexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ValgoLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "COMMENT", "WS", "NL", "ID", "INT", 
      "BINOP", "UNOP"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "','", "'return'", "'var'", "'='", "'print'", "'if'", 
      "'else'", "'{'", "'}'", "'func'", "'proc'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "COMMENT", 
      "WS", "NL", "ID", "INT", "BINOP", "UNOP"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,20,165,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,5,13,
  	93,8,13,10,13,12,13,96,9,13,1,13,1,13,1,13,1,13,5,13,102,8,13,10,13,12,
  	13,105,9,13,1,13,1,13,3,13,109,8,13,1,13,1,13,1,14,4,14,114,8,14,11,14,
  	12,14,115,1,14,3,14,119,8,14,1,14,1,14,1,15,3,15,124,8,15,1,15,1,15,3,
  	15,128,8,15,1,16,4,16,131,8,16,11,16,12,16,132,1,16,5,16,136,8,16,10,
  	16,12,16,139,9,16,1,17,4,17,142,8,17,11,17,12,17,143,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,158,8,18,1,19,1,19,1,
  	19,1,19,3,19,164,8,19,1,103,0,20,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,1,
  	0,7,2,0,10,10,13,13,2,0,9,9,32,32,2,0,65,90,97,122,4,0,48,57,65,90,95,
  	95,97,122,1,0,48,57,5,0,42,43,45,45,47,47,60,60,62,62,2,0,43,43,45,45,
  	180,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,1,41,1,0,0,0,3,43,
  	1,0,0,0,5,45,1,0,0,0,7,47,1,0,0,0,9,54,1,0,0,0,11,58,1,0,0,0,13,60,1,
  	0,0,0,15,66,1,0,0,0,17,69,1,0,0,0,19,74,1,0,0,0,21,76,1,0,0,0,23,78,1,
  	0,0,0,25,83,1,0,0,0,27,108,1,0,0,0,29,118,1,0,0,0,31,127,1,0,0,0,33,130,
  	1,0,0,0,35,141,1,0,0,0,37,157,1,0,0,0,39,163,1,0,0,0,41,42,5,40,0,0,42,
  	2,1,0,0,0,43,44,5,41,0,0,44,4,1,0,0,0,45,46,5,44,0,0,46,6,1,0,0,0,47,
  	48,5,114,0,0,48,49,5,101,0,0,49,50,5,116,0,0,50,51,5,117,0,0,51,52,5,
  	114,0,0,52,53,5,110,0,0,53,8,1,0,0,0,54,55,5,118,0,0,55,56,5,97,0,0,56,
  	57,5,114,0,0,57,10,1,0,0,0,58,59,5,61,0,0,59,12,1,0,0,0,60,61,5,112,0,
  	0,61,62,5,114,0,0,62,63,5,105,0,0,63,64,5,110,0,0,64,65,5,116,0,0,65,
  	14,1,0,0,0,66,67,5,105,0,0,67,68,5,102,0,0,68,16,1,0,0,0,69,70,5,101,
  	0,0,70,71,5,108,0,0,71,72,5,115,0,0,72,73,5,101,0,0,73,18,1,0,0,0,74,
  	75,5,123,0,0,75,20,1,0,0,0,76,77,5,125,0,0,77,22,1,0,0,0,78,79,5,102,
  	0,0,79,80,5,117,0,0,80,81,5,110,0,0,81,82,5,99,0,0,82,24,1,0,0,0,83,84,
  	5,112,0,0,84,85,5,114,0,0,85,86,5,111,0,0,86,87,5,99,0,0,87,26,1,0,0,
  	0,88,89,5,47,0,0,89,90,5,47,0,0,90,94,1,0,0,0,91,93,8,0,0,0,92,91,1,0,
  	0,0,93,96,1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,109,1,0,0,0,96,94,1,
  	0,0,0,97,98,5,47,0,0,98,99,5,42,0,0,99,103,1,0,0,0,100,102,9,0,0,0,101,
  	100,1,0,0,0,102,105,1,0,0,0,103,104,1,0,0,0,103,101,1,0,0,0,104,106,1,
  	0,0,0,105,103,1,0,0,0,106,107,5,42,0,0,107,109,5,47,0,0,108,88,1,0,0,
  	0,108,97,1,0,0,0,109,110,1,0,0,0,110,111,6,13,0,0,111,28,1,0,0,0,112,
  	114,7,1,0,0,113,112,1,0,0,0,114,115,1,0,0,0,115,113,1,0,0,0,115,116,1,
  	0,0,0,116,119,1,0,0,0,117,119,3,31,15,0,118,113,1,0,0,0,118,117,1,0,0,
  	0,119,120,1,0,0,0,120,121,6,14,0,0,121,30,1,0,0,0,122,124,5,13,0,0,123,
  	122,1,0,0,0,123,124,1,0,0,0,124,125,1,0,0,0,125,128,5,10,0,0,126,128,
  	5,13,0,0,127,123,1,0,0,0,127,126,1,0,0,0,128,32,1,0,0,0,129,131,7,2,0,
  	0,130,129,1,0,0,0,131,132,1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,
  	137,1,0,0,0,134,136,7,3,0,0,135,134,1,0,0,0,136,139,1,0,0,0,137,135,1,
  	0,0,0,137,138,1,0,0,0,138,34,1,0,0,0,139,137,1,0,0,0,140,142,7,4,0,0,
  	141,140,1,0,0,0,142,143,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,36,
  	1,0,0,0,145,158,7,5,0,0,146,147,5,60,0,0,147,158,5,61,0,0,148,149,5,62,
  	0,0,149,158,5,61,0,0,150,151,5,61,0,0,151,158,5,61,0,0,152,153,5,97,0,
  	0,153,154,5,110,0,0,154,158,5,100,0,0,155,156,5,111,0,0,156,158,5,114,
  	0,0,157,145,1,0,0,0,157,146,1,0,0,0,157,148,1,0,0,0,157,150,1,0,0,0,157,
  	152,1,0,0,0,157,155,1,0,0,0,158,38,1,0,0,0,159,164,7,6,0,0,160,161,5,
  	110,0,0,161,162,5,111,0,0,162,164,5,116,0,0,163,159,1,0,0,0,163,160,1,
  	0,0,0,164,40,1,0,0,0,13,0,94,103,108,115,118,123,127,132,137,143,157,
  	163,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  valgolexerLexerStaticData = staticData.release();
}

}

ValgoLexer::ValgoLexer(CharStream *input) : Lexer(input) {
  ValgoLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *valgolexerLexerStaticData->atn, valgolexerLexerStaticData->decisionToDFA, valgolexerLexerStaticData->sharedContextCache);
}

ValgoLexer::~ValgoLexer() {
  delete _interpreter;
}

std::string ValgoLexer::getGrammarFileName() const {
  return "Valgo.g4";
}

const std::vector<std::string>& ValgoLexer::getRuleNames() const {
  return valgolexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ValgoLexer::getChannelNames() const {
  return valgolexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ValgoLexer::getModeNames() const {
  return valgolexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ValgoLexer::getVocabulary() const {
  return valgolexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ValgoLexer::getSerializedATN() const {
  return valgolexerLexerStaticData->serializedATN;
}

const atn::ATN& ValgoLexer::getATN() const {
  return *valgolexerLexerStaticData->atn;
}




void ValgoLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  valgolexerLexerInitialize();
#else
  ::antlr4::internal::call_once(valgolexerLexerOnceFlag, valgolexerLexerInitialize);
#endif
}
