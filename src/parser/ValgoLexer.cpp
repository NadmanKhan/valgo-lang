
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "COMMENT", "ID", 
      "INT", "BINOP", "UNOP", "NEWLINE", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'proc'", "'func'", "'('", "','", "')'", "'{'", "'}'", "';'", 
      "'if'", "'else if'", "'else'", "'let'", "'='", "'print'", "'return'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "COMMENT", 
      "ID", "INT", "BINOP", "UNOP", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,22,180,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,
  	1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,5,
  	15,107,8,15,10,15,12,15,110,9,15,1,15,1,15,1,15,1,15,5,15,116,8,15,10,
  	15,12,15,119,9,15,1,15,1,15,3,15,123,8,15,1,15,1,15,1,16,4,16,128,8,16,
  	11,16,12,16,129,1,16,5,16,133,8,16,10,16,12,16,136,9,16,1,17,4,17,139,
  	8,17,11,17,12,17,140,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,3,18,159,8,18,1,19,1,19,1,19,1,19,3,19,
  	165,8,19,1,20,3,20,168,8,20,1,20,1,20,1,20,1,20,1,21,4,21,175,8,21,11,
  	21,12,21,176,1,21,1,21,1,117,0,22,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,
  	41,21,43,22,1,0,7,2,0,10,10,13,13,2,0,65,90,97,122,4,0,48,57,65,90,95,
  	95,97,122,1,0,48,57,5,0,42,43,45,45,47,47,60,60,62,62,2,0,43,43,45,45,
  	2,0,9,9,32,32,193,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,
  	1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,
  	0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,
  	0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,
  	1,0,0,0,0,43,1,0,0,0,1,45,1,0,0,0,3,50,1,0,0,0,5,55,1,0,0,0,7,57,1,0,
  	0,0,9,59,1,0,0,0,11,61,1,0,0,0,13,63,1,0,0,0,15,65,1,0,0,0,17,67,1,0,
  	0,0,19,70,1,0,0,0,21,78,1,0,0,0,23,83,1,0,0,0,25,87,1,0,0,0,27,89,1,0,
  	0,0,29,95,1,0,0,0,31,122,1,0,0,0,33,127,1,0,0,0,35,138,1,0,0,0,37,158,
  	1,0,0,0,39,164,1,0,0,0,41,167,1,0,0,0,43,174,1,0,0,0,45,46,5,112,0,0,
  	46,47,5,114,0,0,47,48,5,111,0,0,48,49,5,99,0,0,49,2,1,0,0,0,50,51,5,102,
  	0,0,51,52,5,117,0,0,52,53,5,110,0,0,53,54,5,99,0,0,54,4,1,0,0,0,55,56,
  	5,40,0,0,56,6,1,0,0,0,57,58,5,44,0,0,58,8,1,0,0,0,59,60,5,41,0,0,60,10,
  	1,0,0,0,61,62,5,123,0,0,62,12,1,0,0,0,63,64,5,125,0,0,64,14,1,0,0,0,65,
  	66,5,59,0,0,66,16,1,0,0,0,67,68,5,105,0,0,68,69,5,102,0,0,69,18,1,0,0,
  	0,70,71,5,101,0,0,71,72,5,108,0,0,72,73,5,115,0,0,73,74,5,101,0,0,74,
  	75,5,32,0,0,75,76,5,105,0,0,76,77,5,102,0,0,77,20,1,0,0,0,78,79,5,101,
  	0,0,79,80,5,108,0,0,80,81,5,115,0,0,81,82,5,101,0,0,82,22,1,0,0,0,83,
  	84,5,108,0,0,84,85,5,101,0,0,85,86,5,116,0,0,86,24,1,0,0,0,87,88,5,61,
  	0,0,88,26,1,0,0,0,89,90,5,112,0,0,90,91,5,114,0,0,91,92,5,105,0,0,92,
  	93,5,110,0,0,93,94,5,116,0,0,94,28,1,0,0,0,95,96,5,114,0,0,96,97,5,101,
  	0,0,97,98,5,116,0,0,98,99,5,117,0,0,99,100,5,114,0,0,100,101,5,110,0,
  	0,101,30,1,0,0,0,102,103,5,47,0,0,103,104,5,47,0,0,104,108,1,0,0,0,105,
  	107,8,0,0,0,106,105,1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,0,108,109,1,
  	0,0,0,109,123,1,0,0,0,110,108,1,0,0,0,111,112,5,47,0,0,112,113,5,42,0,
  	0,113,117,1,0,0,0,114,116,9,0,0,0,115,114,1,0,0,0,116,119,1,0,0,0,117,
  	118,1,0,0,0,117,115,1,0,0,0,118,120,1,0,0,0,119,117,1,0,0,0,120,121,5,
  	42,0,0,121,123,5,47,0,0,122,102,1,0,0,0,122,111,1,0,0,0,123,124,1,0,0,
  	0,124,125,6,15,0,0,125,32,1,0,0,0,126,128,7,1,0,0,127,126,1,0,0,0,128,
  	129,1,0,0,0,129,127,1,0,0,0,129,130,1,0,0,0,130,134,1,0,0,0,131,133,7,
  	2,0,0,132,131,1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,
  	135,34,1,0,0,0,136,134,1,0,0,0,137,139,7,3,0,0,138,137,1,0,0,0,139,140,
  	1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,36,1,0,0,0,142,159,7,4,0,
  	0,143,144,5,60,0,0,144,159,5,61,0,0,145,146,5,62,0,0,146,159,5,61,0,0,
  	147,148,5,61,0,0,148,159,5,61,0,0,149,150,5,32,0,0,150,151,5,97,0,0,151,
  	152,5,110,0,0,152,153,5,100,0,0,153,159,5,32,0,0,154,155,5,32,0,0,155,
  	156,5,111,0,0,156,157,5,114,0,0,157,159,5,32,0,0,158,142,1,0,0,0,158,
  	143,1,0,0,0,158,145,1,0,0,0,158,147,1,0,0,0,158,149,1,0,0,0,158,154,1,
  	0,0,0,159,38,1,0,0,0,160,165,7,5,0,0,161,162,5,110,0,0,162,163,5,111,
  	0,0,163,165,5,116,0,0,164,160,1,0,0,0,164,161,1,0,0,0,165,40,1,0,0,0,
  	166,168,5,13,0,0,167,166,1,0,0,0,167,168,1,0,0,0,168,169,1,0,0,0,169,
  	170,5,10,0,0,170,171,1,0,0,0,171,172,6,20,0,0,172,42,1,0,0,0,173,175,
  	7,6,0,0,174,173,1,0,0,0,175,176,1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,
  	0,177,178,1,0,0,0,178,179,6,21,0,0,179,44,1,0,0,0,11,0,108,117,122,129,
  	134,140,158,164,167,176,1,6,0,0
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
