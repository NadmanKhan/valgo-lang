
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "ID", "INT", "COMMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'func'", "'proc'", "'('", "','", "')'", "'{'", "'}'", "'exit'", 
      "';'", "'return'", "'var'", "'='", "'print'", "'if'", "'else'", "'+'", 
      "'-'", "'not'", "'~'", "'*'", "'/'", "'%'", "'=='", "'!='", "'<'", 
      "'>'", "'<='", "'>='", "'and'", "'or'", "'&'", "'|'", "'<<'", "'>>'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "ID", "INT", "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,38,227,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,
  	1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,16,1,
  	16,1,17,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,
  	22,1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,
  	27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,
  	32,1,33,1,33,1,33,1,34,4,34,182,8,34,11,34,12,34,183,1,34,5,34,187,8,
  	34,10,34,12,34,190,9,34,1,35,4,35,193,8,35,11,35,12,35,194,1,36,1,36,
  	1,36,1,36,5,36,201,8,36,10,36,12,36,204,9,36,1,36,1,36,1,36,1,36,5,36,
  	210,8,36,10,36,12,36,213,9,36,1,36,1,36,3,36,217,8,36,1,36,1,36,1,37,
  	4,37,222,8,37,11,37,12,37,223,1,37,1,37,1,211,0,38,1,1,3,2,5,3,7,4,9,
  	5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,
  	35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,
  	29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,1,0,5,2,0,65,
  	90,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,2,0,10,10,13,13,3,0,
  	9,10,13,13,32,32,233,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,
  	0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,
  	0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,
  	0,73,1,0,0,0,0,75,1,0,0,0,1,77,1,0,0,0,3,82,1,0,0,0,5,87,1,0,0,0,7,89,
  	1,0,0,0,9,91,1,0,0,0,11,93,1,0,0,0,13,95,1,0,0,0,15,97,1,0,0,0,17,102,
  	1,0,0,0,19,104,1,0,0,0,21,111,1,0,0,0,23,115,1,0,0,0,25,117,1,0,0,0,27,
  	123,1,0,0,0,29,126,1,0,0,0,31,131,1,0,0,0,33,133,1,0,0,0,35,135,1,0,0,
  	0,37,139,1,0,0,0,39,141,1,0,0,0,41,143,1,0,0,0,43,145,1,0,0,0,45,147,
  	1,0,0,0,47,150,1,0,0,0,49,153,1,0,0,0,51,155,1,0,0,0,53,157,1,0,0,0,55,
  	160,1,0,0,0,57,163,1,0,0,0,59,167,1,0,0,0,61,170,1,0,0,0,63,172,1,0,0,
  	0,65,174,1,0,0,0,67,177,1,0,0,0,69,181,1,0,0,0,71,192,1,0,0,0,73,216,
  	1,0,0,0,75,221,1,0,0,0,77,78,5,102,0,0,78,79,5,117,0,0,79,80,5,110,0,
  	0,80,81,5,99,0,0,81,2,1,0,0,0,82,83,5,112,0,0,83,84,5,114,0,0,84,85,5,
  	111,0,0,85,86,5,99,0,0,86,4,1,0,0,0,87,88,5,40,0,0,88,6,1,0,0,0,89,90,
  	5,44,0,0,90,8,1,0,0,0,91,92,5,41,0,0,92,10,1,0,0,0,93,94,5,123,0,0,94,
  	12,1,0,0,0,95,96,5,125,0,0,96,14,1,0,0,0,97,98,5,101,0,0,98,99,5,120,
  	0,0,99,100,5,105,0,0,100,101,5,116,0,0,101,16,1,0,0,0,102,103,5,59,0,
  	0,103,18,1,0,0,0,104,105,5,114,0,0,105,106,5,101,0,0,106,107,5,116,0,
  	0,107,108,5,117,0,0,108,109,5,114,0,0,109,110,5,110,0,0,110,20,1,0,0,
  	0,111,112,5,118,0,0,112,113,5,97,0,0,113,114,5,114,0,0,114,22,1,0,0,0,
  	115,116,5,61,0,0,116,24,1,0,0,0,117,118,5,112,0,0,118,119,5,114,0,0,119,
  	120,5,105,0,0,120,121,5,110,0,0,121,122,5,116,0,0,122,26,1,0,0,0,123,
  	124,5,105,0,0,124,125,5,102,0,0,125,28,1,0,0,0,126,127,5,101,0,0,127,
  	128,5,108,0,0,128,129,5,115,0,0,129,130,5,101,0,0,130,30,1,0,0,0,131,
  	132,5,43,0,0,132,32,1,0,0,0,133,134,5,45,0,0,134,34,1,0,0,0,135,136,5,
  	110,0,0,136,137,5,111,0,0,137,138,5,116,0,0,138,36,1,0,0,0,139,140,5,
  	126,0,0,140,38,1,0,0,0,141,142,5,42,0,0,142,40,1,0,0,0,143,144,5,47,0,
  	0,144,42,1,0,0,0,145,146,5,37,0,0,146,44,1,0,0,0,147,148,5,61,0,0,148,
  	149,5,61,0,0,149,46,1,0,0,0,150,151,5,33,0,0,151,152,5,61,0,0,152,48,
  	1,0,0,0,153,154,5,60,0,0,154,50,1,0,0,0,155,156,5,62,0,0,156,52,1,0,0,
  	0,157,158,5,60,0,0,158,159,5,61,0,0,159,54,1,0,0,0,160,161,5,62,0,0,161,
  	162,5,61,0,0,162,56,1,0,0,0,163,164,5,97,0,0,164,165,5,110,0,0,165,166,
  	5,100,0,0,166,58,1,0,0,0,167,168,5,111,0,0,168,169,5,114,0,0,169,60,1,
  	0,0,0,170,171,5,38,0,0,171,62,1,0,0,0,172,173,5,124,0,0,173,64,1,0,0,
  	0,174,175,5,60,0,0,175,176,5,60,0,0,176,66,1,0,0,0,177,178,5,62,0,0,178,
  	179,5,62,0,0,179,68,1,0,0,0,180,182,7,0,0,0,181,180,1,0,0,0,182,183,1,
  	0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,188,1,0,0,0,185,187,7,1,0,0,
  	186,185,1,0,0,0,187,190,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,70,
  	1,0,0,0,190,188,1,0,0,0,191,193,7,2,0,0,192,191,1,0,0,0,193,194,1,0,0,
  	0,194,192,1,0,0,0,194,195,1,0,0,0,195,72,1,0,0,0,196,197,5,47,0,0,197,
  	198,5,47,0,0,198,202,1,0,0,0,199,201,8,3,0,0,200,199,1,0,0,0,201,204,
  	1,0,0,0,202,200,1,0,0,0,202,203,1,0,0,0,203,217,1,0,0,0,204,202,1,0,0,
  	0,205,206,5,47,0,0,206,207,5,42,0,0,207,211,1,0,0,0,208,210,9,0,0,0,209,
  	208,1,0,0,0,210,213,1,0,0,0,211,212,1,0,0,0,211,209,1,0,0,0,212,214,1,
  	0,0,0,213,211,1,0,0,0,214,215,5,42,0,0,215,217,5,47,0,0,216,196,1,0,0,
  	0,216,205,1,0,0,0,217,218,1,0,0,0,218,219,6,36,0,0,219,74,1,0,0,0,220,
  	222,7,4,0,0,221,220,1,0,0,0,222,223,1,0,0,0,223,221,1,0,0,0,223,224,1,
  	0,0,0,224,225,1,0,0,0,225,226,6,37,0,0,226,76,1,0,0,0,8,0,183,188,194,
  	202,211,216,223,1,6,0,0
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
