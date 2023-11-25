
// Generated from Valgo.g4 by ANTLR 4.13.1


#include "ValgoListener.h"
#include "ValgoVisitor.h"

#include "ValgoParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ValgoParserStaticData final {
  ValgoParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ValgoParserStaticData(const ValgoParserStaticData&) = delete;
  ValgoParserStaticData(ValgoParserStaticData&&) = delete;
  ValgoParserStaticData& operator=(const ValgoParserStaticData&) = delete;
  ValgoParserStaticData& operator=(ValgoParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag valgoParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ValgoParserStaticData *valgoParserStaticData = nullptr;

void valgoParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (valgoParserStaticData != nullptr) {
    return;
  }
#else
  assert(valgoParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ValgoParserStaticData>(
    std::vector<std::string>{
      "program", "function", "procedure", "block", "statement", "expression", 
      "binaryExpression", "unaryExpression", "primaryExpression", "type"
    },
    std::vector<std::string>{
      "", "'('", "','", "')'", "'#'", "'$'", "'{'", "'}'", "'return'", "';'", 
      "'print'", "'='", "'if'", "'else if'", "'else'", "'while'", "'or'", 
      "'and'", "'|'", "'~'", "'&'", "'=='", "'!='", "'<'", "'>'", "'<='", 
      "'>='", "'++'", "'+:'", "'<<'", "'>>'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'not'", "'['", "']'", "'int'", "'char'", "'float'", "'..'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "ID", "INT", "FLOAT", "CHAR", 
      "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,48,268,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,4,0,23,8,0,11,0,12,0,24,1,0,1,0,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,38,8,1,10,1,12,1,41,9,1,3,1,43,8,1,1,
  	1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,58,8,2,10,2,12,
  	2,61,9,2,3,2,63,8,2,1,2,1,2,1,3,1,3,5,3,69,8,3,10,3,12,3,72,9,3,1,3,1,
  	3,1,4,1,4,3,4,78,8,4,1,4,1,4,1,4,1,4,1,4,5,4,85,8,4,10,4,12,4,88,9,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,5,4,108,8,4,10,4,12,4,111,9,4,3,4,113,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,5,4,125,8,4,10,4,12,4,128,9,4,1,4,1,4,3,4,132,8,4,1,4,1,
  	4,1,4,1,4,3,4,138,8,4,1,5,1,5,1,6,1,6,1,6,3,6,145,8,6,1,6,1,6,1,6,3,6,
  	150,8,6,1,6,1,6,1,6,3,6,155,8,6,1,6,1,6,1,6,3,6,160,8,6,1,6,1,6,1,6,3,
  	6,165,8,6,1,6,1,6,1,6,3,6,170,8,6,1,6,1,6,1,6,3,6,175,8,6,1,6,1,6,1,6,
  	3,6,180,8,6,1,6,1,6,1,6,3,6,185,8,6,1,6,1,6,1,6,3,6,190,8,6,1,6,1,6,1,
  	6,3,6,195,8,6,1,6,1,6,1,6,3,6,200,8,6,3,6,202,8,6,1,7,3,7,205,8,7,1,7,
  	1,7,1,8,1,8,1,8,1,8,1,8,5,8,214,8,8,10,8,12,8,217,9,8,3,8,219,8,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,
  	8,239,8,8,10,8,12,8,242,9,8,3,8,244,8,8,1,8,3,8,247,8,8,1,9,1,9,1,9,1,
  	9,3,9,253,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,263,8,9,10,9,12,9,266,
  	9,9,1,9,0,1,18,10,0,2,4,6,8,10,12,14,16,18,0,6,1,0,21,22,1,0,23,26,1,
  	0,29,30,1,0,31,32,1,0,33,35,3,0,19,19,31,32,36,36,316,0,22,1,0,0,0,2,
  	28,1,0,0,0,4,47,1,0,0,0,6,66,1,0,0,0,8,137,1,0,0,0,10,139,1,0,0,0,12,
  	201,1,0,0,0,14,204,1,0,0,0,16,246,1,0,0,0,18,252,1,0,0,0,20,23,3,2,1,
  	0,21,23,3,4,2,0,22,20,1,0,0,0,22,21,1,0,0,0,23,24,1,0,0,0,24,22,1,0,0,
  	0,24,25,1,0,0,0,25,26,1,0,0,0,26,27,5,0,0,1,27,1,1,0,0,0,28,29,3,18,9,
  	0,29,30,5,43,0,0,30,42,5,1,0,0,31,32,3,18,9,0,32,39,5,43,0,0,33,34,5,
  	2,0,0,34,35,3,18,9,0,35,36,5,43,0,0,36,38,1,0,0,0,37,33,1,0,0,0,38,41,
  	1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,42,31,
  	1,0,0,0,42,43,1,0,0,0,43,44,1,0,0,0,44,45,5,3,0,0,45,46,3,6,3,0,46,3,
  	1,0,0,0,47,48,5,4,0,0,48,62,5,43,0,0,49,50,5,5,0,0,50,51,3,18,9,0,51,
  	59,5,43,0,0,52,53,5,2,0,0,53,54,5,5,0,0,54,55,3,18,9,0,55,56,5,43,0,0,
  	56,58,1,0,0,0,57,52,1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,
  	60,63,1,0,0,0,61,59,1,0,0,0,62,49,1,0,0,0,62,63,1,0,0,0,63,64,1,0,0,0,
  	64,65,3,6,3,0,65,5,1,0,0,0,66,70,5,6,0,0,67,69,3,8,4,0,68,67,1,0,0,0,
  	69,72,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,71,73,1,0,0,0,72,70,1,0,0,0,
  	73,74,5,7,0,0,74,7,1,0,0,0,75,77,5,8,0,0,76,78,3,10,5,0,77,76,1,0,0,0,
  	77,78,1,0,0,0,78,79,1,0,0,0,79,138,5,9,0,0,80,81,5,10,0,0,81,86,3,10,
  	5,0,82,83,5,2,0,0,83,85,3,10,5,0,84,82,1,0,0,0,85,88,1,0,0,0,86,84,1,
  	0,0,0,86,87,1,0,0,0,87,89,1,0,0,0,88,86,1,0,0,0,89,90,5,9,0,0,90,138,
  	1,0,0,0,91,92,3,18,9,0,92,93,5,43,0,0,93,94,5,11,0,0,94,95,3,10,5,0,95,
  	96,5,9,0,0,96,138,1,0,0,0,97,98,5,43,0,0,98,99,5,11,0,0,99,100,3,10,5,
  	0,100,101,5,9,0,0,101,138,1,0,0,0,102,103,5,43,0,0,103,112,5,1,0,0,104,
  	109,3,10,5,0,105,106,5,2,0,0,106,108,3,10,5,0,107,105,1,0,0,0,108,111,
  	1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,
  	0,112,104,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,114,115,5,3,0,0,115,
  	138,5,9,0,0,116,138,3,6,3,0,117,118,5,12,0,0,118,119,3,10,5,0,119,126,
  	3,6,3,0,120,121,5,13,0,0,121,122,3,10,5,0,122,123,3,6,3,0,123,125,1,0,
  	0,0,124,120,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,
  	131,1,0,0,0,128,126,1,0,0,0,129,130,5,14,0,0,130,132,3,6,3,0,131,129,
  	1,0,0,0,131,132,1,0,0,0,132,138,1,0,0,0,133,134,5,15,0,0,134,135,3,10,
  	5,0,135,136,3,6,3,0,136,138,1,0,0,0,137,75,1,0,0,0,137,80,1,0,0,0,137,
  	91,1,0,0,0,137,97,1,0,0,0,137,102,1,0,0,0,137,116,1,0,0,0,137,117,1,0,
  	0,0,137,133,1,0,0,0,138,9,1,0,0,0,139,140,3,12,6,0,140,11,1,0,0,0,141,
  	144,3,14,7,0,142,143,5,16,0,0,143,145,3,12,6,0,144,142,1,0,0,0,144,145,
  	1,0,0,0,145,202,1,0,0,0,146,149,3,14,7,0,147,148,5,17,0,0,148,150,3,12,
  	6,0,149,147,1,0,0,0,149,150,1,0,0,0,150,202,1,0,0,0,151,154,3,14,7,0,
  	152,153,5,18,0,0,153,155,3,12,6,0,154,152,1,0,0,0,154,155,1,0,0,0,155,
  	202,1,0,0,0,156,159,3,14,7,0,157,158,5,19,0,0,158,160,3,12,6,0,159,157,
  	1,0,0,0,159,160,1,0,0,0,160,202,1,0,0,0,161,164,3,14,7,0,162,163,5,20,
  	0,0,163,165,3,12,6,0,164,162,1,0,0,0,164,165,1,0,0,0,165,202,1,0,0,0,
  	166,169,3,14,7,0,167,168,7,0,0,0,168,170,3,12,6,0,169,167,1,0,0,0,169,
  	170,1,0,0,0,170,202,1,0,0,0,171,174,3,14,7,0,172,173,7,1,0,0,173,175,
  	3,12,6,0,174,172,1,0,0,0,174,175,1,0,0,0,175,202,1,0,0,0,176,179,3,14,
  	7,0,177,178,5,27,0,0,178,180,3,12,6,0,179,177,1,0,0,0,179,180,1,0,0,0,
  	180,202,1,0,0,0,181,184,3,14,7,0,182,183,5,28,0,0,183,185,3,12,6,0,184,
  	182,1,0,0,0,184,185,1,0,0,0,185,202,1,0,0,0,186,189,3,14,7,0,187,188,
  	7,2,0,0,188,190,3,12,6,0,189,187,1,0,0,0,189,190,1,0,0,0,190,202,1,0,
  	0,0,191,194,3,14,7,0,192,193,7,3,0,0,193,195,3,12,6,0,194,192,1,0,0,0,
  	194,195,1,0,0,0,195,202,1,0,0,0,196,199,3,14,7,0,197,198,7,4,0,0,198,
  	200,3,12,6,0,199,197,1,0,0,0,199,200,1,0,0,0,200,202,1,0,0,0,201,141,
  	1,0,0,0,201,146,1,0,0,0,201,151,1,0,0,0,201,156,1,0,0,0,201,161,1,0,0,
  	0,201,166,1,0,0,0,201,171,1,0,0,0,201,176,1,0,0,0,201,181,1,0,0,0,201,
  	186,1,0,0,0,201,191,1,0,0,0,201,196,1,0,0,0,202,13,1,0,0,0,203,205,7,
  	5,0,0,204,203,1,0,0,0,204,205,1,0,0,0,205,206,1,0,0,0,206,207,3,16,8,
  	0,207,15,1,0,0,0,208,247,5,44,0,0,209,218,5,37,0,0,210,215,3,10,5,0,211,
  	212,5,2,0,0,212,214,3,10,5,0,213,211,1,0,0,0,214,217,1,0,0,0,215,213,
  	1,0,0,0,215,216,1,0,0,0,216,219,1,0,0,0,217,215,1,0,0,0,218,210,1,0,0,
  	0,218,219,1,0,0,0,219,220,1,0,0,0,220,247,5,38,0,0,221,247,5,46,0,0,222,
  	247,5,45,0,0,223,224,5,43,0,0,224,225,5,37,0,0,225,226,3,10,5,0,226,227,
  	5,38,0,0,227,247,1,0,0,0,228,247,5,43,0,0,229,230,5,1,0,0,230,231,3,10,
  	5,0,231,232,5,3,0,0,232,247,1,0,0,0,233,234,5,43,0,0,234,243,5,1,0,0,
  	235,240,3,10,5,0,236,237,5,2,0,0,237,239,3,10,5,0,238,236,1,0,0,0,239,
  	242,1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,0,241,244,1,0,0,0,242,240,1,
  	0,0,0,243,235,1,0,0,0,243,244,1,0,0,0,244,245,1,0,0,0,245,247,5,3,0,0,
  	246,208,1,0,0,0,246,209,1,0,0,0,246,221,1,0,0,0,246,222,1,0,0,0,246,223,
  	1,0,0,0,246,228,1,0,0,0,246,229,1,0,0,0,246,233,1,0,0,0,247,17,1,0,0,
  	0,248,249,6,9,-1,0,249,253,5,39,0,0,250,253,5,40,0,0,251,253,5,41,0,0,
  	252,248,1,0,0,0,252,250,1,0,0,0,252,251,1,0,0,0,253,264,1,0,0,0,254,255,
  	10,2,0,0,255,256,5,37,0,0,256,257,5,44,0,0,257,263,5,38,0,0,258,259,10,
  	1,0,0,259,260,5,37,0,0,260,261,5,42,0,0,261,263,5,38,0,0,262,254,1,0,
  	0,0,262,258,1,0,0,0,263,266,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,265,
  	19,1,0,0,0,266,264,1,0,0,0,36,22,24,39,42,59,62,70,77,86,109,112,126,
  	131,137,144,149,154,159,164,169,174,179,184,189,194,199,201,204,215,218,
  	240,243,246,252,262,264
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  valgoParserStaticData = staticData.release();
}

}

ValgoParser::ValgoParser(TokenStream *input) : ValgoParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ValgoParser::ValgoParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ValgoParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *valgoParserStaticData->atn, valgoParserStaticData->decisionToDFA, valgoParserStaticData->sharedContextCache, options);
}

ValgoParser::~ValgoParser() {
  delete _interpreter;
}

const atn::ATN& ValgoParser::getATN() const {
  return *valgoParserStaticData->atn;
}

std::string ValgoParser::getGrammarFileName() const {
  return "Valgo.g4";
}

const std::vector<std::string>& ValgoParser::getRuleNames() const {
  return valgoParserStaticData->ruleNames;
}

const dfa::Vocabulary& ValgoParser::getVocabulary() const {
  return valgoParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ValgoParser::getSerializedATN() const {
  return valgoParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ValgoParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ValgoParser::ProgramContext::EOF() {
  return getToken(ValgoParser::EOF, 0);
}

std::vector<ValgoParser::FunctionContext *> ValgoParser::ProgramContext::function() {
  return getRuleContexts<ValgoParser::FunctionContext>();
}

ValgoParser::FunctionContext* ValgoParser::ProgramContext::function(size_t i) {
  return getRuleContext<ValgoParser::FunctionContext>(i);
}

std::vector<ValgoParser::ProcedureContext *> ValgoParser::ProgramContext::procedure() {
  return getRuleContexts<ValgoParser::ProcedureContext>();
}

ValgoParser::ProcedureContext* ValgoParser::ProgramContext::procedure(size_t i) {
  return getRuleContext<ValgoParser::ProcedureContext>(i);
}


size_t ValgoParser::ProgramContext::getRuleIndex() const {
  return ValgoParser::RuleProgram;
}

void ValgoParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ValgoParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any ValgoParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ProgramContext* ValgoParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ValgoParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ValgoParser::T__38:
        case ValgoParser::T__39:
        case ValgoParser::T__40: {
          setState(20);
          function();
          break;
        }

        case ValgoParser::T__3: {
          setState(21);
          procedure();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(24); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3848290697232) != 0));
    setState(26);
    match(ValgoParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

ValgoParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::BlockContext* ValgoParser::FunctionContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}

std::vector<ValgoParser::TypeContext *> ValgoParser::FunctionContext::type() {
  return getRuleContexts<ValgoParser::TypeContext>();
}

ValgoParser::TypeContext* ValgoParser::FunctionContext::type(size_t i) {
  return getRuleContext<ValgoParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> ValgoParser::FunctionContext::ID() {
  return getTokens(ValgoParser::ID);
}

tree::TerminalNode* ValgoParser::FunctionContext::ID(size_t i) {
  return getToken(ValgoParser::ID, i);
}


size_t ValgoParser::FunctionContext::getRuleIndex() const {
  return ValgoParser::RuleFunction;
}

void ValgoParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void ValgoParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any ValgoParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::FunctionContext* ValgoParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, ValgoParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    antlrcpp::downCast<FunctionContext *>(_localctx)->returnType = type(0);
    setState(29);
    antlrcpp::downCast<FunctionContext *>(_localctx)->name = match(ValgoParser::ID);
    setState(30);
    match(ValgoParser::T__0);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3848290697216) != 0)) {
      setState(31);
      antlrcpp::downCast<FunctionContext *>(_localctx)->typeContext = type(0);
      antlrcpp::downCast<FunctionContext *>(_localctx)->paramTypes.push_back(antlrcpp::downCast<FunctionContext *>(_localctx)->typeContext);
      setState(32);
      antlrcpp::downCast<FunctionContext *>(_localctx)->idToken = match(ValgoParser::ID);
      antlrcpp::downCast<FunctionContext *>(_localctx)->paramNames.push_back(antlrcpp::downCast<FunctionContext *>(_localctx)->idToken);
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__1) {
        setState(33);
        match(ValgoParser::T__1);
        setState(34);
        antlrcpp::downCast<FunctionContext *>(_localctx)->typeContext = type(0);
        antlrcpp::downCast<FunctionContext *>(_localctx)->paramTypes.push_back(antlrcpp::downCast<FunctionContext *>(_localctx)->typeContext);
        setState(35);
        antlrcpp::downCast<FunctionContext *>(_localctx)->idToken = match(ValgoParser::ID);
        antlrcpp::downCast<FunctionContext *>(_localctx)->paramNames.push_back(antlrcpp::downCast<FunctionContext *>(_localctx)->idToken);
        setState(41);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(44);
    match(ValgoParser::T__2);
    setState(45);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

ValgoParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::BlockContext* ValgoParser::ProcedureContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> ValgoParser::ProcedureContext::ID() {
  return getTokens(ValgoParser::ID);
}

tree::TerminalNode* ValgoParser::ProcedureContext::ID(size_t i) {
  return getToken(ValgoParser::ID, i);
}

std::vector<ValgoParser::TypeContext *> ValgoParser::ProcedureContext::type() {
  return getRuleContexts<ValgoParser::TypeContext>();
}

ValgoParser::TypeContext* ValgoParser::ProcedureContext::type(size_t i) {
  return getRuleContext<ValgoParser::TypeContext>(i);
}


size_t ValgoParser::ProcedureContext::getRuleIndex() const {
  return ValgoParser::RuleProcedure;
}

void ValgoParser::ProcedureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedure(this);
}

void ValgoParser::ProcedureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedure(this);
}


std::any ValgoParser::ProcedureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitProcedure(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ProcedureContext* ValgoParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 4, ValgoParser::RuleProcedure);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(ValgoParser::T__3);
    setState(48);
    antlrcpp::downCast<ProcedureContext *>(_localctx)->name = match(ValgoParser::ID);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::T__4) {
      setState(49);
      match(ValgoParser::T__4);
      setState(50);
      antlrcpp::downCast<ProcedureContext *>(_localctx)->typeContext = type(0);
      antlrcpp::downCast<ProcedureContext *>(_localctx)->paramTypes.push_back(antlrcpp::downCast<ProcedureContext *>(_localctx)->typeContext);
      setState(51);
      antlrcpp::downCast<ProcedureContext *>(_localctx)->idToken = match(ValgoParser::ID);
      antlrcpp::downCast<ProcedureContext *>(_localctx)->paramNames.push_back(antlrcpp::downCast<ProcedureContext *>(_localctx)->idToken);
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__1) {
        setState(52);
        match(ValgoParser::T__1);
        setState(53);
        match(ValgoParser::T__4);
        setState(54);
        antlrcpp::downCast<ProcedureContext *>(_localctx)->typeContext = type(0);
        antlrcpp::downCast<ProcedureContext *>(_localctx)->paramTypes.push_back(antlrcpp::downCast<ProcedureContext *>(_localctx)->typeContext);
        setState(55);
        antlrcpp::downCast<ProcedureContext *>(_localctx)->idToken = match(ValgoParser::ID);
        antlrcpp::downCast<ProcedureContext *>(_localctx)->paramNames.push_back(antlrcpp::downCast<ProcedureContext *>(_localctx)->idToken);
        setState(61);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(64);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ValgoParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ValgoParser::StatementContext *> ValgoParser::BlockContext::statement() {
  return getRuleContexts<ValgoParser::StatementContext>();
}

ValgoParser::StatementContext* ValgoParser::BlockContext::statement(size_t i) {
  return getRuleContext<ValgoParser::StatementContext>(i);
}


size_t ValgoParser::BlockContext::getRuleIndex() const {
  return ValgoParser::RuleBlock;
}

void ValgoParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ValgoParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any ValgoParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::BlockContext* ValgoParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, ValgoParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(ValgoParser::T__5);
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12644383757632) != 0)) {
      setState(67);
      statement();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(ValgoParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ValgoParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ValgoParser::StatementContext::getRuleIndex() const {
  return ValgoParser::RuleStatement;
}

void ValgoParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStatementContext ------------------------------------------------------------------

ValgoParser::ExpressionContext* ValgoParser::WhileStatementContext::expression() {
  return getRuleContext<ValgoParser::ExpressionContext>(0);
}

ValgoParser::BlockContext* ValgoParser::WhileStatementContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}

ValgoParser::WhileStatementContext::WhileStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void ValgoParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

std::any ValgoParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintStatementContext ------------------------------------------------------------------

std::vector<ValgoParser::ExpressionContext *> ValgoParser::PrintStatementContext::expression() {
  return getRuleContexts<ValgoParser::ExpressionContext>();
}

ValgoParser::ExpressionContext* ValgoParser::PrintStatementContext::expression(size_t i) {
  return getRuleContext<ValgoParser::ExpressionContext>(i);
}

ValgoParser::PrintStatementContext::PrintStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::PrintStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStatement(this);
}
void ValgoParser::PrintStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStatement(this);
}

std::any ValgoParser::PrintStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitPrintStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStatementContext ------------------------------------------------------------------

ValgoParser::BlockContext* ValgoParser::BlockStatementContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}

ValgoParser::BlockStatementContext::BlockStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}
void ValgoParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}

std::any ValgoParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStatementContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::AssignmentStatementContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::ExpressionContext* ValgoParser::AssignmentStatementContext::expression() {
  return getRuleContext<ValgoParser::ExpressionContext>(0);
}

ValgoParser::AssignmentStatementContext::AssignmentStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}
void ValgoParser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}

std::any ValgoParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallStatementContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::CallStatementContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

std::vector<ValgoParser::ExpressionContext *> ValgoParser::CallStatementContext::expression() {
  return getRuleContexts<ValgoParser::ExpressionContext>();
}

ValgoParser::ExpressionContext* ValgoParser::CallStatementContext::expression(size_t i) {
  return getRuleContext<ValgoParser::ExpressionContext>(i);
}

ValgoParser::CallStatementContext::CallStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::CallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallStatement(this);
}
void ValgoParser::CallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallStatement(this);
}

std::any ValgoParser::CallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitCallStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

ValgoParser::ExpressionContext* ValgoParser::ReturnStatementContext::expression() {
  return getRuleContext<ValgoParser::ExpressionContext>(0);
}

ValgoParser::ReturnStatementContext::ReturnStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}
void ValgoParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

std::any ValgoParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

std::vector<ValgoParser::ExpressionContext *> ValgoParser::IfStatementContext::expression() {
  return getRuleContexts<ValgoParser::ExpressionContext>();
}

ValgoParser::ExpressionContext* ValgoParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<ValgoParser::ExpressionContext>(i);
}

std::vector<ValgoParser::BlockContext *> ValgoParser::IfStatementContext::block() {
  return getRuleContexts<ValgoParser::BlockContext>();
}

ValgoParser::BlockContext* ValgoParser::IfStatementContext::block(size_t i) {
  return getRuleContext<ValgoParser::BlockContext>(i);
}

ValgoParser::IfStatementContext::IfStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}
void ValgoParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

std::any ValgoParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclarationStatementContext ------------------------------------------------------------------

ValgoParser::TypeContext* ValgoParser::VarDeclarationStatementContext::type() {
  return getRuleContext<ValgoParser::TypeContext>(0);
}

tree::TerminalNode* ValgoParser::VarDeclarationStatementContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::ExpressionContext* ValgoParser::VarDeclarationStatementContext::expression() {
  return getRuleContext<ValgoParser::ExpressionContext>(0);
}

ValgoParser::VarDeclarationStatementContext::VarDeclarationStatementContext(StatementContext *ctx) { copyFrom(ctx); }

void ValgoParser::VarDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclarationStatement(this);
}
void ValgoParser::VarDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclarationStatement(this);
}

std::any ValgoParser::VarDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitVarDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}
ValgoParser::StatementContext* ValgoParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, ValgoParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::ReturnStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(75);
      match(ValgoParser::T__7);
      setState(77);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 132153996738562) != 0)) {
        setState(76);
        expression();
      }
      setState(79);
      match(ValgoParser::T__8);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::PrintStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(80);
      match(ValgoParser::T__9);
      setState(81);
      expression();
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__1) {
        setState(82);
        match(ValgoParser::T__1);
        setState(83);
        expression();
        setState(88);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(89);
      match(ValgoParser::T__8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::VarDeclarationStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(91);
      type(0);
      setState(92);
      match(ValgoParser::ID);
      setState(93);
      match(ValgoParser::T__10);
      setState(94);
      expression();
      setState(95);
      match(ValgoParser::T__8);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::AssignmentStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(97);
      match(ValgoParser::ID);
      setState(98);
      match(ValgoParser::T__10);
      setState(99);
      expression();
      setState(100);
      match(ValgoParser::T__8);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ValgoParser::CallStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(102);
      match(ValgoParser::ID);
      setState(103);
      match(ValgoParser::T__0);
      setState(112);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 132153996738562) != 0)) {
        setState(104);
        expression();
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__1) {
          setState(105);
          match(ValgoParser::T__1);
          setState(106);
          expression();
          setState(111);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(114);
      match(ValgoParser::T__2);
      setState(115);
      match(ValgoParser::T__8);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ValgoParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(116);
      block();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ValgoParser::IfStatementContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(117);
      match(ValgoParser::T__11);
      setState(118);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->ifCondition = expression();
      setState(119);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->ifBlock = block();
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__12) {
        setState(120);
        match(ValgoParser::T__12);
        setState(121);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->expressionContext = expression();
        antlrcpp::downCast<IfStatementContext *>(_localctx)->elseIfConditions.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->expressionContext);
        setState(122);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->blockContext = block();
        antlrcpp::downCast<IfStatementContext *>(_localctx)->elseIfBlocks.push_back(antlrcpp::downCast<IfStatementContext *>(_localctx)->blockContext);
        setState(128);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(131);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__13) {
        setState(129);
        match(ValgoParser::T__13);
        setState(130);
        antlrcpp::downCast<IfStatementContext *>(_localctx)->elseBlock = block();
      }
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ValgoParser::WhileStatementContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(133);
      match(ValgoParser::T__14);
      setState(134);
      expression();
      setState(135);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ValgoParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::BinaryExpressionContext* ValgoParser::ExpressionContext::binaryExpression() {
  return getRuleContext<ValgoParser::BinaryExpressionContext>(0);
}


size_t ValgoParser::ExpressionContext::getRuleIndex() const {
  return ValgoParser::RuleExpression;
}

void ValgoParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ValgoParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any ValgoParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ExpressionContext* ValgoParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, ValgoParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    binaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryExpressionContext ------------------------------------------------------------------

ValgoParser::BinaryExpressionContext::BinaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::UnaryExpressionContext* ValgoParser::BinaryExpressionContext::unaryExpression() {
  return getRuleContext<ValgoParser::UnaryExpressionContext>(0);
}

ValgoParser::BinaryExpressionContext* ValgoParser::BinaryExpressionContext::binaryExpression() {
  return getRuleContext<ValgoParser::BinaryExpressionContext>(0);
}


size_t ValgoParser::BinaryExpressionContext::getRuleIndex() const {
  return ValgoParser::RuleBinaryExpression;
}

void ValgoParser::BinaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpression(this);
}

void ValgoParser::BinaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpression(this);
}


std::any ValgoParser::BinaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitBinaryExpression(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::BinaryExpressionContext* ValgoParser::binaryExpression() {
  BinaryExpressionContext *_localctx = _tracker.createInstance<BinaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, ValgoParser::RuleBinaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(141);
      unaryExpression();
      setState(144);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__15) {
        setState(142);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = match(ValgoParser::T__15);
        setState(143);
        binaryExpression();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(146);
      unaryExpression();
      setState(149);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__16) {
        setState(147);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = match(ValgoParser::T__16);
        setState(148);
        binaryExpression();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(151);
      unaryExpression();
      setState(154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__17) {
        setState(152);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = match(ValgoParser::T__17);
        setState(153);
        binaryExpression();
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(156);
      unaryExpression();
      setState(159);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__18) {
        setState(157);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = match(ValgoParser::T__18);
        setState(158);
        binaryExpression();
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(161);
      unaryExpression();
      setState(164);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__19) {
        setState(162);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = match(ValgoParser::T__19);
        setState(163);
        binaryExpression();
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(166);
      unaryExpression();
      setState(169);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__20

      || _la == ValgoParser::T__21) {
        setState(167);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ValgoParser::T__20

        || _la == ValgoParser::T__21)) {
          antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(168);
        binaryExpression();
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(171);
      unaryExpression();
      setState(174);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 125829120) != 0)) {
        setState(172);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 125829120) != 0))) {
          antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(173);
        binaryExpression();
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(176);
      unaryExpression();
      setState(179);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__26) {
        setState(177);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = match(ValgoParser::T__26);
        setState(178);
        binaryExpression();
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(181);
      unaryExpression();
      setState(184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__27) {
        setState(182);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = match(ValgoParser::T__27);
        setState(183);
        binaryExpression();
      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(186);
      unaryExpression();
      setState(189);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__28

      || _la == ValgoParser::T__29) {
        setState(187);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ValgoParser::T__28

        || _la == ValgoParser::T__29)) {
          antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(188);
        binaryExpression();
      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(191);
      unaryExpression();
      setState(194);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ValgoParser::T__30

      || _la == ValgoParser::T__31) {
        setState(192);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ValgoParser::T__30

        || _la == ValgoParser::T__31)) {
          antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(193);
        binaryExpression();
      }
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(196);
      unaryExpression();
      setState(199);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 60129542144) != 0)) {
        setState(197);
        antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 60129542144) != 0))) {
          antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(198);
        binaryExpression();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

ValgoParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::PrimaryExpressionContext* ValgoParser::UnaryExpressionContext::primaryExpression() {
  return getRuleContext<ValgoParser::PrimaryExpressionContext>(0);
}


size_t ValgoParser::UnaryExpressionContext::getRuleIndex() const {
  return ValgoParser::RuleUnaryExpression;
}

void ValgoParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void ValgoParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


std::any ValgoParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::UnaryExpressionContext* ValgoParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, ValgoParser::RuleUnaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75162451968) != 0)) {
      setState(203);
      antlrcpp::downCast<UnaryExpressionContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75162451968) != 0))) {
        antlrcpp::downCast<UnaryExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(206);
    primaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

ValgoParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ValgoParser::PrimaryExpressionContext::getRuleIndex() const {
  return ValgoParser::RulePrimaryExpression;
}

void ValgoParser::PrimaryExpressionContext::copyFrom(PrimaryExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CallContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::CallContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

std::vector<ValgoParser::ExpressionContext *> ValgoParser::CallContext::expression() {
  return getRuleContexts<ValgoParser::ExpressionContext>();
}

ValgoParser::ExpressionContext* ValgoParser::CallContext::expression(size_t i) {
  return getRuleContext<ValgoParser::ExpressionContext>(i);
}

ValgoParser::CallContext::CallContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}
void ValgoParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}

std::any ValgoParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayLiteralContext ------------------------------------------------------------------

std::vector<ValgoParser::ExpressionContext *> ValgoParser::ArrayLiteralContext::expression() {
  return getRuleContexts<ValgoParser::ExpressionContext>();
}

ValgoParser::ExpressionContext* ValgoParser::ArrayLiteralContext::expression(size_t i) {
  return getRuleContext<ValgoParser::ExpressionContext>(i);
}

ValgoParser::ArrayLiteralContext::ArrayLiteralContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::ArrayLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteral(this);
}
void ValgoParser::ArrayLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteral(this);
}

std::any ValgoParser::ArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitArrayLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedContext ------------------------------------------------------------------

ValgoParser::ExpressionContext* ValgoParser::ParenthesizedContext::expression() {
  return getRuleContext<ValgoParser::ExpressionContext>(0);
}

ValgoParser::ParenthesizedContext::ParenthesizedContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::ParenthesizedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesized(this);
}
void ValgoParser::ParenthesizedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesized(this);
}

std::any ValgoParser::ParenthesizedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitParenthesized(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::VariableContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::VariableContext::VariableContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void ValgoParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

std::any ValgoParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerLiteralContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::IntegerLiteralContext::INT() {
  return getToken(ValgoParser::INT, 0);
}

ValgoParser::IntegerLiteralContext::IntegerLiteralContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}
void ValgoParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}

std::any ValgoParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatLiteralContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::FloatLiteralContext::FLOAT() {
  return getToken(ValgoParser::FLOAT, 0);
}

ValgoParser::FloatLiteralContext::FloatLiteralContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}
void ValgoParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}

std::any ValgoParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharLiteralContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::CharLiteralContext::CHAR() {
  return getToken(ValgoParser::CHAR, 0);
}

ValgoParser::CharLiteralContext::CharLiteralContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharLiteral(this);
}
void ValgoParser::CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharLiteral(this);
}

std::any ValgoParser::CharLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitCharLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayAccessContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::ArrayAccessContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::ExpressionContext* ValgoParser::ArrayAccessContext::expression() {
  return getRuleContext<ValgoParser::ExpressionContext>(0);
}

ValgoParser::ArrayAccessContext::ArrayAccessContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }

void ValgoParser::ArrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess(this);
}
void ValgoParser::ArrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess(this);
}

std::any ValgoParser::ArrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitArrayAccess(this);
  else
    return visitor->visitChildren(this);
}
ValgoParser::PrimaryExpressionContext* ValgoParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, ValgoParser::RulePrimaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::IntegerLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(208);
      antlrcpp::downCast<IntegerLiteralContext *>(_localctx)->literal = match(ValgoParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::ArrayLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(209);
      match(ValgoParser::T__36);
      setState(218);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 132153996738562) != 0)) {
        setState(210);
        antlrcpp::downCast<ArrayLiteralContext *>(_localctx)->expressionContext = expression();
        antlrcpp::downCast<ArrayLiteralContext *>(_localctx)->values.push_back(antlrcpp::downCast<ArrayLiteralContext *>(_localctx)->expressionContext);
        setState(215);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__1) {
          setState(211);
          match(ValgoParser::T__1);
          setState(212);
          antlrcpp::downCast<ArrayLiteralContext *>(_localctx)->expressionContext = expression();
          antlrcpp::downCast<ArrayLiteralContext *>(_localctx)->values.push_back(antlrcpp::downCast<ArrayLiteralContext *>(_localctx)->expressionContext);
          setState(217);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(220);
      match(ValgoParser::T__37);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::CharLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(221);
      antlrcpp::downCast<CharLiteralContext *>(_localctx)->literal = match(ValgoParser::CHAR);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::FloatLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(222);
      antlrcpp::downCast<FloatLiteralContext *>(_localctx)->literal = match(ValgoParser::FLOAT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ValgoParser::ArrayAccessContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(223);
      antlrcpp::downCast<ArrayAccessContext *>(_localctx)->name = match(ValgoParser::ID);
      setState(224);
      match(ValgoParser::T__36);
      setState(225);
      antlrcpp::downCast<ArrayAccessContext *>(_localctx)->index = expression();
      setState(226);
      match(ValgoParser::T__37);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ValgoParser::VariableContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(228);
      antlrcpp::downCast<VariableContext *>(_localctx)->name = match(ValgoParser::ID);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ValgoParser::ParenthesizedContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(229);
      match(ValgoParser::T__0);
      setState(230);
      expression();
      setState(231);
      match(ValgoParser::T__2);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ValgoParser::CallContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(233);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(ValgoParser::ID);
      setState(234);
      match(ValgoParser::T__0);
      setState(243);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 132153996738562) != 0)) {
        setState(235);
        antlrcpp::downCast<CallContext *>(_localctx)->expressionContext = expression();
        antlrcpp::downCast<CallContext *>(_localctx)->args.push_back(antlrcpp::downCast<CallContext *>(_localctx)->expressionContext);
        setState(240);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__1) {
          setState(236);
          match(ValgoParser::T__1);
          setState(237);
          antlrcpp::downCast<CallContext *>(_localctx)->expressionContext = expression();
          antlrcpp::downCast<CallContext *>(_localctx)->args.push_back(antlrcpp::downCast<CallContext *>(_localctx)->expressionContext);
          setState(242);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(245);
      match(ValgoParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ValgoParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ValgoParser::TypeContext::getRuleIndex() const {
  return ValgoParser::RuleType;
}

void ValgoParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CharTypeContext ------------------------------------------------------------------

ValgoParser::CharTypeContext::CharTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ValgoParser::CharTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharType(this);
}
void ValgoParser::CharTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharType(this);
}

std::any ValgoParser::CharTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitCharType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatTypeContext ------------------------------------------------------------------

ValgoParser::FloatTypeContext::FloatTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ValgoParser::FloatTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatType(this);
}
void ValgoParser::FloatTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatType(this);
}

std::any ValgoParser::FloatTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitFloatType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayTypeContext ------------------------------------------------------------------

ValgoParser::TypeContext* ValgoParser::ArrayTypeContext::type() {
  return getRuleContext<ValgoParser::TypeContext>(0);
}

tree::TerminalNode* ValgoParser::ArrayTypeContext::INT() {
  return getToken(ValgoParser::INT, 0);
}

ValgoParser::ArrayTypeContext::ArrayTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ValgoParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}
void ValgoParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}

std::any ValgoParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntTypeContext ------------------------------------------------------------------

ValgoParser::IntTypeContext::IntTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ValgoParser::IntTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntType(this);
}
void ValgoParser::IntTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntType(this);
}

std::any ValgoParser::IntTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitIntType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DynamicArrayTypeContext ------------------------------------------------------------------

ValgoParser::TypeContext* ValgoParser::DynamicArrayTypeContext::type() {
  return getRuleContext<ValgoParser::TypeContext>(0);
}

ValgoParser::DynamicArrayTypeContext::DynamicArrayTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void ValgoParser::DynamicArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamicArrayType(this);
}
void ValgoParser::DynamicArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamicArrayType(this);
}

std::any ValgoParser::DynamicArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitDynamicArrayType(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::TypeContext* ValgoParser::type() {
   return type(0);
}

ValgoParser::TypeContext* ValgoParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ValgoParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  ValgoParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, ValgoParser::RuleType, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ValgoParser::T__38: {
        _localctx = _tracker.createInstance<IntTypeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(249);
        match(ValgoParser::T__38);
        break;
      }

      case ValgoParser::T__39: {
        _localctx = _tracker.createInstance<CharTypeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(250);
        match(ValgoParser::T__39);
        break;
      }

      case ValgoParser::T__40: {
        _localctx = _tracker.createInstance<FloatTypeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(251);
        match(ValgoParser::T__40);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(264);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(262);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArrayTypeContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->base = previousContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(254);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(255);
          match(ValgoParser::T__36);
          setState(256);
          antlrcpp::downCast<ArrayTypeContext *>(_localctx)->size = match(ValgoParser::INT);
          setState(257);
          match(ValgoParser::T__37);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DynamicArrayTypeContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->base = previousContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(258);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(259);
          match(ValgoParser::T__36);
          setState(260);
          match(ValgoParser::T__41);
          setState(261);
          match(ValgoParser::T__37);
          break;
        }

        default:
          break;
        } 
      }
      setState(266);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ValgoParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return typeSempred(antlrcpp::downCast<TypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ValgoParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void ValgoParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  valgoParserInitialize();
#else
  ::antlr4::internal::call_once(valgoParserOnceFlag, valgoParserInitialize);
#endif
}
