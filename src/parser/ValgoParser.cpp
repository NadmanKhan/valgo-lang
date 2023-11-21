
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
      "prog", "proc", "func", "proto", "block", "stmt", "expr", "atom", 
      "call", "ifElse", "decl", "assign", "print", "return"
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
  	4,1,22,159,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	4,0,31,8,0,11,0,12,0,32,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,5,3,48,8,3,10,3,12,3,51,9,3,3,3,53,8,3,1,3,1,3,1,4,1,4,5,4,59,8,
  	4,10,4,12,4,62,9,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,72,8,5,1,5,1,5,
  	5,5,76,8,5,10,5,12,5,79,9,5,1,5,3,5,82,8,5,1,6,1,6,1,6,1,6,1,6,3,6,89,
  	8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,100,8,7,1,8,1,8,1,8,1,8,1,
  	8,5,8,107,8,8,10,8,12,8,110,9,8,3,8,112,8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,5,9,123,8,9,10,9,12,9,126,9,9,1,9,1,9,3,9,130,8,9,1,10,1,10,
  	1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,142,8,11,10,11,12,11,145,
  	9,11,1,12,1,12,1,12,1,12,5,12,151,8,12,10,12,12,12,154,9,12,1,13,1,13,
  	1,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,18,20,22,24,26,0,1,2,0,8,8,21,
  	21,167,0,30,1,0,0,0,2,34,1,0,0,0,4,38,1,0,0,0,6,42,1,0,0,0,8,56,1,0,0,
  	0,10,71,1,0,0,0,12,88,1,0,0,0,14,99,1,0,0,0,16,101,1,0,0,0,18,115,1,0,
  	0,0,20,131,1,0,0,0,22,134,1,0,0,0,24,146,1,0,0,0,26,155,1,0,0,0,28,31,
  	3,4,2,0,29,31,3,2,1,0,30,28,1,0,0,0,30,29,1,0,0,0,31,32,1,0,0,0,32,30,
  	1,0,0,0,32,33,1,0,0,0,33,1,1,0,0,0,34,35,5,1,0,0,35,36,3,6,3,0,36,37,
  	3,8,4,0,37,3,1,0,0,0,38,39,5,2,0,0,39,40,3,6,3,0,40,41,3,8,4,0,41,5,1,
  	0,0,0,42,43,5,17,0,0,43,52,5,3,0,0,44,49,5,17,0,0,45,46,5,4,0,0,46,48,
  	5,17,0,0,47,45,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,53,
  	1,0,0,0,51,49,1,0,0,0,52,44,1,0,0,0,52,53,1,0,0,0,53,54,1,0,0,0,54,55,
  	5,5,0,0,55,7,1,0,0,0,56,60,5,6,0,0,57,59,3,10,5,0,58,57,1,0,0,0,59,62,
  	1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,64,
  	5,7,0,0,64,9,1,0,0,0,65,72,3,20,10,0,66,72,3,22,11,0,67,72,3,24,12,0,
  	68,72,3,26,13,0,69,72,3,16,8,0,70,72,3,18,9,0,71,65,1,0,0,0,71,66,1,0,
  	0,0,71,67,1,0,0,0,71,68,1,0,0,0,71,69,1,0,0,0,71,70,1,0,0,0,72,81,1,0,
  	0,0,73,77,7,0,0,0,74,76,5,21,0,0,75,74,1,0,0,0,76,79,1,0,0,0,77,75,1,
  	0,0,0,77,78,1,0,0,0,78,80,1,0,0,0,79,77,1,0,0,0,80,82,3,10,5,0,81,73,
  	1,0,0,0,81,82,1,0,0,0,82,11,1,0,0,0,83,84,3,14,7,0,84,85,5,19,0,0,85,
  	86,3,12,6,0,86,89,1,0,0,0,87,89,3,14,7,0,88,83,1,0,0,0,88,87,1,0,0,0,
  	89,13,1,0,0,0,90,91,5,3,0,0,91,92,3,12,6,0,92,93,5,5,0,0,93,100,1,0,0,
  	0,94,100,5,18,0,0,95,100,5,17,0,0,96,97,5,20,0,0,97,100,3,12,6,0,98,100,
  	3,16,8,0,99,90,1,0,0,0,99,94,1,0,0,0,99,95,1,0,0,0,99,96,1,0,0,0,99,98,
  	1,0,0,0,100,15,1,0,0,0,101,102,5,17,0,0,102,111,5,3,0,0,103,108,3,12,
  	6,0,104,105,5,4,0,0,105,107,3,12,6,0,106,104,1,0,0,0,107,110,1,0,0,0,
  	108,106,1,0,0,0,108,109,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,111,103,
  	1,0,0,0,111,112,1,0,0,0,112,113,1,0,0,0,113,114,5,5,0,0,114,17,1,0,0,
  	0,115,116,5,9,0,0,116,117,3,12,6,0,117,124,3,8,4,0,118,119,5,10,0,0,119,
  	120,3,12,6,0,120,121,3,8,4,0,121,123,1,0,0,0,122,118,1,0,0,0,123,126,
  	1,0,0,0,124,122,1,0,0,0,124,125,1,0,0,0,125,129,1,0,0,0,126,124,1,0,0,
  	0,127,128,5,11,0,0,128,130,3,8,4,0,129,127,1,0,0,0,129,130,1,0,0,0,130,
  	19,1,0,0,0,131,132,5,12,0,0,132,133,3,22,11,0,133,21,1,0,0,0,134,135,
  	5,17,0,0,135,136,5,13,0,0,136,143,3,12,6,0,137,138,5,4,0,0,138,139,5,
  	17,0,0,139,140,5,13,0,0,140,142,3,12,6,0,141,137,1,0,0,0,142,145,1,0,
  	0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,23,1,0,0,0,145,143,1,0,0,0,146,
  	147,5,14,0,0,147,152,3,12,6,0,148,149,5,4,0,0,149,151,3,12,6,0,150,148,
  	1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,25,1,0,0,
  	0,154,152,1,0,0,0,155,156,5,15,0,0,156,157,3,12,6,0,157,27,1,0,0,0,16,
  	30,32,49,52,60,71,77,81,88,99,108,111,124,129,143,152
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


//----------------- ProgContext ------------------------------------------------------------------

ValgoParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ValgoParser::FuncContext *> ValgoParser::ProgContext::func() {
  return getRuleContexts<ValgoParser::FuncContext>();
}

ValgoParser::FuncContext* ValgoParser::ProgContext::func(size_t i) {
  return getRuleContext<ValgoParser::FuncContext>(i);
}

std::vector<ValgoParser::ProcContext *> ValgoParser::ProgContext::proc() {
  return getRuleContexts<ValgoParser::ProcContext>();
}

ValgoParser::ProcContext* ValgoParser::ProgContext::proc(size_t i) {
  return getRuleContext<ValgoParser::ProcContext>(i);
}


size_t ValgoParser::ProgContext::getRuleIndex() const {
  return ValgoParser::RuleProg;
}

void ValgoParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void ValgoParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any ValgoParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ProgContext* ValgoParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ValgoParser::RuleProg);
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
    setState(30); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(30);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ValgoParser::T__1: {
          setState(28);
          func();
          break;
        }

        case ValgoParser::T__0: {
          setState(29);
          proc();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(32); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ValgoParser::T__0

    || _la == ValgoParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcContext ------------------------------------------------------------------

ValgoParser::ProcContext::ProcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::ProtoContext* ValgoParser::ProcContext::proto() {
  return getRuleContext<ValgoParser::ProtoContext>(0);
}

ValgoParser::BlockContext* ValgoParser::ProcContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}


size_t ValgoParser::ProcContext::getRuleIndex() const {
  return ValgoParser::RuleProc;
}

void ValgoParser::ProcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProc(this);
}

void ValgoParser::ProcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProc(this);
}


std::any ValgoParser::ProcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitProc(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ProcContext* ValgoParser::proc() {
  ProcContext *_localctx = _tracker.createInstance<ProcContext>(_ctx, getState());
  enterRule(_localctx, 2, ValgoParser::RuleProc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(ValgoParser::T__0);
    setState(35);
    proto();
    setState(36);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

ValgoParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::ProtoContext* ValgoParser::FuncContext::proto() {
  return getRuleContext<ValgoParser::ProtoContext>(0);
}

ValgoParser::BlockContext* ValgoParser::FuncContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}


size_t ValgoParser::FuncContext::getRuleIndex() const {
  return ValgoParser::RuleFunc;
}

void ValgoParser::FuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc(this);
}

void ValgoParser::FuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc(this);
}


std::any ValgoParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::FuncContext* ValgoParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 4, ValgoParser::RuleFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(ValgoParser::T__1);
    setState(39);
    proto();
    setState(40);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProtoContext ------------------------------------------------------------------

ValgoParser::ProtoContext::ProtoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ValgoParser::ProtoContext::ID() {
  return getTokens(ValgoParser::ID);
}

tree::TerminalNode* ValgoParser::ProtoContext::ID(size_t i) {
  return getToken(ValgoParser::ID, i);
}


size_t ValgoParser::ProtoContext::getRuleIndex() const {
  return ValgoParser::RuleProto;
}

void ValgoParser::ProtoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProto(this);
}

void ValgoParser::ProtoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProto(this);
}


std::any ValgoParser::ProtoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitProto(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ProtoContext* ValgoParser::proto() {
  ProtoContext *_localctx = _tracker.createInstance<ProtoContext>(_ctx, getState());
  enterRule(_localctx, 6, ValgoParser::RuleProto);
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
    setState(42);
    match(ValgoParser::ID);
    setState(43);
    match(ValgoParser::T__2);
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::ID) {
      setState(44);
      match(ValgoParser::ID);
      setState(49);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__3) {
        setState(45);
        match(ValgoParser::T__3);
        setState(46);
        match(ValgoParser::ID);
        setState(51);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(54);
    match(ValgoParser::T__4);
   
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

std::vector<ValgoParser::StmtContext *> ValgoParser::BlockContext::stmt() {
  return getRuleContexts<ValgoParser::StmtContext>();
}

ValgoParser::StmtContext* ValgoParser::BlockContext::stmt(size_t i) {
  return getRuleContext<ValgoParser::StmtContext>(i);
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
  enterRule(_localctx, 8, ValgoParser::RuleBlock);
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
    setState(56);
    match(ValgoParser::T__5);
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 184832) != 0)) {
      setState(57);
      stmt();
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
    match(ValgoParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

ValgoParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::DeclContext* ValgoParser::StmtContext::decl() {
  return getRuleContext<ValgoParser::DeclContext>(0);
}

ValgoParser::AssignContext* ValgoParser::StmtContext::assign() {
  return getRuleContext<ValgoParser::AssignContext>(0);
}

ValgoParser::PrintContext* ValgoParser::StmtContext::print() {
  return getRuleContext<ValgoParser::PrintContext>(0);
}

ValgoParser::ReturnContext* ValgoParser::StmtContext::return_() {
  return getRuleContext<ValgoParser::ReturnContext>(0);
}

ValgoParser::CallContext* ValgoParser::StmtContext::call() {
  return getRuleContext<ValgoParser::CallContext>(0);
}

ValgoParser::IfElseContext* ValgoParser::StmtContext::ifElse() {
  return getRuleContext<ValgoParser::IfElseContext>(0);
}

std::vector<tree::TerminalNode *> ValgoParser::StmtContext::NEWLINE() {
  return getTokens(ValgoParser::NEWLINE);
}

tree::TerminalNode* ValgoParser::StmtContext::NEWLINE(size_t i) {
  return getToken(ValgoParser::NEWLINE, i);
}

ValgoParser::StmtContext* ValgoParser::StmtContext::stmt() {
  return getRuleContext<ValgoParser::StmtContext>(0);
}


size_t ValgoParser::StmtContext::getRuleIndex() const {
  return ValgoParser::RuleStmt;
}

void ValgoParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void ValgoParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


std::any ValgoParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::StmtContext* ValgoParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 10, ValgoParser::RuleStmt);
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
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(65);
      decl();
      break;
    }

    case 2: {
      setState(66);
      assign();
      break;
    }

    case 3: {
      setState(67);
      print();
      break;
    }

    case 4: {
      setState(68);
      return_();
      break;
    }

    case 5: {
      setState(69);
      call();
      break;
    }

    case 6: {
      setState(70);
      ifElse();
      break;
    }

    default:
      break;
    }
    setState(81);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::T__7

    || _la == ValgoParser::NEWLINE) {
      setState(73);
      _la = _input->LA(1);
      if (!(_la == ValgoParser::T__7

      || _la == ValgoParser::NEWLINE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }

      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::NEWLINE) {
        setState(74);
        match(ValgoParser::NEWLINE);
        setState(79);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(80);
      stmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ValgoParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::AtomContext* ValgoParser::ExprContext::atom() {
  return getRuleContext<ValgoParser::AtomContext>(0);
}

tree::TerminalNode* ValgoParser::ExprContext::BINOP() {
  return getToken(ValgoParser::BINOP, 0);
}

ValgoParser::ExprContext* ValgoParser::ExprContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}


size_t ValgoParser::ExprContext::getRuleIndex() const {
  return ValgoParser::RuleExpr;
}

void ValgoParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void ValgoParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any ValgoParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ExprContext* ValgoParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 12, ValgoParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(83);
      atom();
      setState(84);
      match(ValgoParser::BINOP);
      setState(85);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      atom();
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

//----------------- AtomContext ------------------------------------------------------------------

ValgoParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::ExprContext* ValgoParser::AtomContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

tree::TerminalNode* ValgoParser::AtomContext::INT() {
  return getToken(ValgoParser::INT, 0);
}

tree::TerminalNode* ValgoParser::AtomContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

tree::TerminalNode* ValgoParser::AtomContext::UNOP() {
  return getToken(ValgoParser::UNOP, 0);
}

ValgoParser::CallContext* ValgoParser::AtomContext::call() {
  return getRuleContext<ValgoParser::CallContext>(0);
}


size_t ValgoParser::AtomContext::getRuleIndex() const {
  return ValgoParser::RuleAtom;
}

void ValgoParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void ValgoParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


std::any ValgoParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::AtomContext* ValgoParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 14, ValgoParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(90);
      match(ValgoParser::T__2);
      setState(91);
      expr();
      setState(92);
      match(ValgoParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      match(ValgoParser::INT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(95);
      match(ValgoParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(96);
      match(ValgoParser::UNOP);
      setState(97);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(98);
      call();
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

//----------------- CallContext ------------------------------------------------------------------

ValgoParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ValgoParser::CallContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

std::vector<ValgoParser::ExprContext *> ValgoParser::CallContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::CallContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}


size_t ValgoParser::CallContext::getRuleIndex() const {
  return ValgoParser::RuleCall;
}

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

ValgoParser::CallContext* ValgoParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 16, ValgoParser::RuleCall);
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
    setState(101);
    match(ValgoParser::ID);
    setState(102);
    match(ValgoParser::T__2);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1441800) != 0)) {
      setState(103);
      expr();
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__3) {
        setState(104);
        match(ValgoParser::T__3);
        setState(105);
        expr();
        setState(110);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(113);
    match(ValgoParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfElseContext ------------------------------------------------------------------

ValgoParser::IfElseContext::IfElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ValgoParser::ExprContext *> ValgoParser::IfElseContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::IfElseContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}

std::vector<ValgoParser::BlockContext *> ValgoParser::IfElseContext::block() {
  return getRuleContexts<ValgoParser::BlockContext>();
}

ValgoParser::BlockContext* ValgoParser::IfElseContext::block(size_t i) {
  return getRuleContext<ValgoParser::BlockContext>(i);
}


size_t ValgoParser::IfElseContext::getRuleIndex() const {
  return ValgoParser::RuleIfElse;
}

void ValgoParser::IfElseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElse(this);
}

void ValgoParser::IfElseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElse(this);
}


std::any ValgoParser::IfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitIfElse(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::IfElseContext* ValgoParser::ifElse() {
  IfElseContext *_localctx = _tracker.createInstance<IfElseContext>(_ctx, getState());
  enterRule(_localctx, 18, ValgoParser::RuleIfElse);
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
    setState(115);
    match(ValgoParser::T__8);
    setState(116);
    expr();
    setState(117);
    block();
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ValgoParser::T__9) {
      setState(118);
      match(ValgoParser::T__9);
      setState(119);
      expr();
      setState(120);
      block();
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::T__10) {
      setState(127);
      match(ValgoParser::T__10);
      setState(128);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

ValgoParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::AssignContext* ValgoParser::DeclContext::assign() {
  return getRuleContext<ValgoParser::AssignContext>(0);
}


size_t ValgoParser::DeclContext::getRuleIndex() const {
  return ValgoParser::RuleDecl;
}

void ValgoParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void ValgoParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


std::any ValgoParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::DeclContext* ValgoParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 20, ValgoParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(ValgoParser::T__11);
    setState(132);
    assign();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

ValgoParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ValgoParser::AssignContext::ID() {
  return getTokens(ValgoParser::ID);
}

tree::TerminalNode* ValgoParser::AssignContext::ID(size_t i) {
  return getToken(ValgoParser::ID, i);
}

std::vector<ValgoParser::ExprContext *> ValgoParser::AssignContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::AssignContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}


size_t ValgoParser::AssignContext::getRuleIndex() const {
  return ValgoParser::RuleAssign;
}

void ValgoParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void ValgoParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


std::any ValgoParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::AssignContext* ValgoParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 22, ValgoParser::RuleAssign);
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
    setState(134);
    match(ValgoParser::ID);
    setState(135);
    match(ValgoParser::T__12);
    setState(136);
    expr();
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ValgoParser::T__3) {
      setState(137);
      match(ValgoParser::T__3);
      setState(138);
      match(ValgoParser::ID);
      setState(139);
      match(ValgoParser::T__12);
      setState(140);
      expr();
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

ValgoParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ValgoParser::ExprContext *> ValgoParser::PrintContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::PrintContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}


size_t ValgoParser::PrintContext::getRuleIndex() const {
  return ValgoParser::RulePrint;
}

void ValgoParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void ValgoParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any ValgoParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::PrintContext* ValgoParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 24, ValgoParser::RulePrint);
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
    setState(146);
    match(ValgoParser::T__13);
    setState(147);
    expr();
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ValgoParser::T__3) {
      setState(148);
      match(ValgoParser::T__3);
      setState(149);
      expr();
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

ValgoParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::ExprContext* ValgoParser::ReturnContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}


size_t ValgoParser::ReturnContext::getRuleIndex() const {
  return ValgoParser::RuleReturn;
}

void ValgoParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}

void ValgoParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}


std::any ValgoParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::ReturnContext* ValgoParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 26, ValgoParser::RuleReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(ValgoParser::T__14);
    setState(156);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ValgoParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  valgoParserInitialize();
#else
  ::antlr4::internal::call_once(valgoParserOnceFlag, valgoParserInitialize);
#endif
}
