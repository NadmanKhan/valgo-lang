
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
      "prog", "func", "proc", "proto", "block", "stmt", "ifElse", "expr", 
      "primary"
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
  	4,1,38,143,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,4,0,21,8,0,11,0,12,0,22,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,5,3,40,8,3,10,3,12,3,43,9,3,3,3,45,
  	8,3,1,3,1,3,1,4,1,4,5,4,51,8,4,10,4,12,4,54,9,4,1,4,1,4,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	5,5,79,8,5,10,5,12,5,82,9,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,91,8,5,10,
  	5,12,5,94,9,5,3,5,96,8,5,1,5,1,5,1,5,1,5,3,5,102,8,5,1,6,1,6,1,6,1,6,
  	1,6,1,6,3,6,110,8,6,3,6,112,8,6,1,7,3,7,115,8,7,1,7,1,7,1,7,3,7,120,8,
  	7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,133,8,8,10,8,12,8,136,
  	9,8,3,8,138,8,8,1,8,3,8,141,8,8,1,8,0,0,9,0,2,4,6,8,10,12,14,16,0,2,1,
  	0,16,19,2,0,16,17,19,34,157,0,20,1,0,0,0,2,26,1,0,0,0,4,30,1,0,0,0,6,
  	34,1,0,0,0,8,48,1,0,0,0,10,101,1,0,0,0,12,103,1,0,0,0,14,114,1,0,0,0,
  	16,140,1,0,0,0,18,21,3,2,1,0,19,21,3,4,2,0,20,18,1,0,0,0,20,19,1,0,0,
  	0,21,22,1,0,0,0,22,20,1,0,0,0,22,23,1,0,0,0,23,24,1,0,0,0,24,25,5,0,0,
  	1,25,1,1,0,0,0,26,27,5,1,0,0,27,28,3,6,3,0,28,29,3,8,4,0,29,3,1,0,0,0,
  	30,31,5,2,0,0,31,32,3,6,3,0,32,33,3,8,4,0,33,5,1,0,0,0,34,35,5,35,0,0,
  	35,44,5,3,0,0,36,41,5,35,0,0,37,38,5,4,0,0,38,40,5,35,0,0,39,37,1,0,0,
  	0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,45,1,0,0,0,43,41,1,0,0,
  	0,44,36,1,0,0,0,44,45,1,0,0,0,45,46,1,0,0,0,46,47,5,5,0,0,47,7,1,0,0,
  	0,48,52,5,6,0,0,49,51,3,10,5,0,50,49,1,0,0,0,51,54,1,0,0,0,52,50,1,0,
  	0,0,52,53,1,0,0,0,53,55,1,0,0,0,54,52,1,0,0,0,55,56,5,7,0,0,56,9,1,0,
  	0,0,57,58,5,8,0,0,58,102,5,9,0,0,59,60,5,10,0,0,60,61,3,14,7,0,61,62,
  	5,9,0,0,62,102,1,0,0,0,63,64,5,11,0,0,64,65,5,35,0,0,65,66,5,12,0,0,66,
  	67,3,14,7,0,67,68,5,9,0,0,68,102,1,0,0,0,69,70,5,35,0,0,70,71,5,12,0,
  	0,71,72,3,14,7,0,72,73,5,9,0,0,73,102,1,0,0,0,74,75,5,13,0,0,75,80,3,
  	14,7,0,76,77,5,4,0,0,77,79,3,14,7,0,78,76,1,0,0,0,79,82,1,0,0,0,80,78,
  	1,0,0,0,80,81,1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,84,5,9,0,0,84,102,
  	1,0,0,0,85,86,5,35,0,0,86,95,5,3,0,0,87,92,3,14,7,0,88,89,5,4,0,0,89,
  	91,3,14,7,0,90,88,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,
  	96,1,0,0,0,94,92,1,0,0,0,95,87,1,0,0,0,95,96,1,0,0,0,96,97,1,0,0,0,97,
  	98,5,5,0,0,98,102,5,9,0,0,99,102,3,12,6,0,100,102,3,8,4,0,101,57,1,0,
  	0,0,101,59,1,0,0,0,101,63,1,0,0,0,101,69,1,0,0,0,101,74,1,0,0,0,101,85,
  	1,0,0,0,101,99,1,0,0,0,101,100,1,0,0,0,102,11,1,0,0,0,103,104,5,14,0,
  	0,104,105,3,14,7,0,105,111,3,8,4,0,106,109,5,15,0,0,107,110,3,12,6,0,
  	108,110,3,8,4,0,109,107,1,0,0,0,109,108,1,0,0,0,110,112,1,0,0,0,111,106,
  	1,0,0,0,111,112,1,0,0,0,112,13,1,0,0,0,113,115,7,0,0,0,114,113,1,0,0,
  	0,114,115,1,0,0,0,115,116,1,0,0,0,116,119,3,16,8,0,117,118,7,1,0,0,118,
  	120,3,14,7,0,119,117,1,0,0,0,119,120,1,0,0,0,120,15,1,0,0,0,121,141,5,
  	36,0,0,122,141,5,35,0,0,123,124,5,3,0,0,124,125,3,14,7,0,125,126,5,5,
  	0,0,126,141,1,0,0,0,127,128,5,35,0,0,128,137,5,3,0,0,129,134,3,14,7,0,
  	130,131,5,4,0,0,131,133,3,14,7,0,132,130,1,0,0,0,133,136,1,0,0,0,134,
  	132,1,0,0,0,134,135,1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,137,129,1,
  	0,0,0,137,138,1,0,0,0,138,139,1,0,0,0,139,141,5,5,0,0,140,121,1,0,0,0,
  	140,122,1,0,0,0,140,123,1,0,0,0,140,127,1,0,0,0,141,17,1,0,0,0,16,20,
  	22,41,44,52,80,92,95,101,109,111,114,119,134,137,140
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

tree::TerminalNode* ValgoParser::ProgContext::EOF() {
  return getToken(ValgoParser::EOF, 0);
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
    setState(20); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(20);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ValgoParser::T__0: {
          setState(18);
          func();
          break;
        }

        case ValgoParser::T__1: {
          setState(19);
          proc();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(22); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ValgoParser::T__0

    || _la == ValgoParser::T__1);
    setState(24);
    match(ValgoParser::EOF);
   
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
  enterRule(_localctx, 2, ValgoParser::RuleFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(ValgoParser::T__0);
    setState(27);
    proto();
    setState(28);
    block();
   
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
  enterRule(_localctx, 4, ValgoParser::RuleProc);

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
    match(ValgoParser::T__1);
    setState(31);
    proto();
    setState(32);
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
    setState(34);
    match(ValgoParser::ID);
    setState(35);
    match(ValgoParser::T__2);
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::ID) {
      setState(36);
      match(ValgoParser::ID);
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__3) {
        setState(37);
        match(ValgoParser::T__3);
        setState(38);
        match(ValgoParser::ID);
        setState(43);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(46);
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
    setState(48);
    match(ValgoParser::T__5);
    setState(52);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34359766336) != 0)) {
      setState(49);
      stmt();
      setState(54);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(55);
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


size_t ValgoParser::StmtContext::getRuleIndex() const {
  return ValgoParser::RuleStmt;
}

void ValgoParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintStmtContext ------------------------------------------------------------------

std::vector<ValgoParser::ExprContext *> ValgoParser::PrintStmtContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::PrintStmtContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}

ValgoParser::PrintStmtContext::PrintStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::PrintStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStmt(this);
}
void ValgoParser::PrintStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStmt(this);
}

std::any ValgoParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProcCallStmtContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::ProcCallStmtContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

std::vector<ValgoParser::ExprContext *> ValgoParser::ProcCallStmtContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::ProcCallStmtContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}

ValgoParser::ProcCallStmtContext::ProcCallStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::ProcCallStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcCallStmt(this);
}
void ValgoParser::ProcCallStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcCallStmt(this);
}

std::any ValgoParser::ProcCallStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitProcCallStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

ValgoParser::BlockContext* ValgoParser::BlockStmtContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}

ValgoParser::BlockStmtContext::BlockStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::BlockStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStmt(this);
}
void ValgoParser::BlockStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStmt(this);
}

std::any ValgoParser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclStmtContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::DeclStmtContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::ExprContext* ValgoParser::DeclStmtContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::DeclStmtContext::DeclStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::DeclStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclStmt(this);
}
void ValgoParser::DeclStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclStmt(this);
}

std::any ValgoParser::DeclStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitDeclStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseStmtContext ------------------------------------------------------------------

ValgoParser::IfElseContext* ValgoParser::IfElseStmtContext::ifElse() {
  return getRuleContext<ValgoParser::IfElseContext>(0);
}

ValgoParser::IfElseStmtContext::IfElseStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::IfElseStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElseStmt(this);
}
void ValgoParser::IfElseStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElseStmt(this);
}

std::any ValgoParser::IfElseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitIfElseStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStmtContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::AssignStmtContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::ExprContext* ValgoParser::AssignStmtContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::AssignStmtContext::AssignStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::AssignStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignStmt(this);
}
void ValgoParser::AssignStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignStmt(this);
}

std::any ValgoParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

ValgoParser::ExprContext* ValgoParser::ReturnStmtContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::ReturnStmtContext::ReturnStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}
void ValgoParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}

std::any ValgoParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExitStmtContext ------------------------------------------------------------------

ValgoParser::ExitStmtContext::ExitStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void ValgoParser::ExitStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExitStmt(this);
}
void ValgoParser::ExitStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExitStmt(this);
}

std::any ValgoParser::ExitStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitExitStmt(this);
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
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::ExitStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(57);
      match(ValgoParser::T__7);
      setState(58);
      match(ValgoParser::T__8);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(59);
      match(ValgoParser::T__9);
      setState(60);
      expr();
      setState(61);
      match(ValgoParser::T__8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::DeclStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(63);
      match(ValgoParser::T__10);
      setState(64);
      match(ValgoParser::ID);
      setState(65);
      match(ValgoParser::T__11);
      setState(66);
      expr();
      setState(67);
      match(ValgoParser::T__8);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::AssignStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(69);
      match(ValgoParser::ID);
      setState(70);
      match(ValgoParser::T__11);
      setState(71);
      expr();
      setState(72);
      match(ValgoParser::T__8);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ValgoParser::PrintStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(74);
      match(ValgoParser::T__12);
      setState(75);
      expr();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__3) {
        setState(76);
        match(ValgoParser::T__3);
        setState(77);
        expr();
        setState(82);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(83);
      match(ValgoParser::T__8);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ValgoParser::ProcCallStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(85);
      match(ValgoParser::ID);
      setState(86);
      match(ValgoParser::T__2);
      setState(95);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 103080198152) != 0)) {
        setState(87);
        expr();
        setState(92);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__3) {
          setState(88);
          match(ValgoParser::T__3);
          setState(89);
          expr();
          setState(94);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(97);
      match(ValgoParser::T__4);
      setState(98);
      match(ValgoParser::T__8);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ValgoParser::IfElseStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(99);
      ifElse();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ValgoParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(100);
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

//----------------- IfElseContext ------------------------------------------------------------------

ValgoParser::IfElseContext::IfElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::ExprContext* ValgoParser::IfElseContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

std::vector<ValgoParser::BlockContext *> ValgoParser::IfElseContext::block() {
  return getRuleContexts<ValgoParser::BlockContext>();
}

ValgoParser::BlockContext* ValgoParser::IfElseContext::block(size_t i) {
  return getRuleContext<ValgoParser::BlockContext>(i);
}

ValgoParser::IfElseContext* ValgoParser::IfElseContext::ifElse() {
  return getRuleContext<ValgoParser::IfElseContext>(0);
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
  enterRule(_localctx, 12, ValgoParser::RuleIfElse);
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
    setState(103);
    match(ValgoParser::T__13);
    setState(104);
    expr();
    setState(105);
    block();
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::T__14) {
      setState(106);
      match(ValgoParser::T__14);
      setState(109);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ValgoParser::T__13: {
          setState(107);
          ifElse();
          break;
        }

        case ValgoParser::T__5: {
          setState(108);
          block();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
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

ValgoParser::PrimaryContext* ValgoParser::ExprContext::primary() {
  return getRuleContext<ValgoParser::PrimaryContext>(0);
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
  enterRule(_localctx, 14, ValgoParser::RuleExpr);
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
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 983040) != 0)) {
      setState(113);
      antlrcpp::downCast<ExprContext *>(_localctx)->unop = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 983040) != 0))) {
        antlrcpp::downCast<ExprContext *>(_localctx)->unop = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(116);
    primary();
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34359410688) != 0)) {
      setState(117);
      antlrcpp::downCast<ExprContext *>(_localctx)->binop = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 34359410688) != 0))) {
        antlrcpp::downCast<ExprContext *>(_localctx)->binop = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(118);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

ValgoParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ValgoParser::PrimaryContext::getRuleIndex() const {
  return ValgoParser::RulePrimary;
}

void ValgoParser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenthsizedContext ------------------------------------------------------------------

ValgoParser::ExprContext* ValgoParser::ParenthsizedContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::ParenthsizedContext::ParenthsizedContext(PrimaryContext *ctx) { copyFrom(ctx); }

void ValgoParser::ParenthsizedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthsized(this);
}
void ValgoParser::ParenthsizedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthsized(this);
}

std::any ValgoParser::ParenthsizedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitParenthsized(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::IntLiteralContext::INT() {
  return getToken(ValgoParser::INT, 0);
}

ValgoParser::IntLiteralContext::IntLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void ValgoParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}
void ValgoParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}

std::any ValgoParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::VariableContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::VariableContext::VariableContext(PrimaryContext *ctx) { copyFrom(ctx); }

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
//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::FuncCallContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

std::vector<ValgoParser::ExprContext *> ValgoParser::FuncCallContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::FuncCallContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}

ValgoParser::FuncCallContext::FuncCallContext(PrimaryContext *ctx) { copyFrom(ctx); }

void ValgoParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}
void ValgoParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}

std::any ValgoParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}
ValgoParser::PrimaryContext* ValgoParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 16, ValgoParser::RulePrimary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::IntLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(121);
      match(ValgoParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::VariableContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(122);
      match(ValgoParser::ID);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::ParenthsizedContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(123);
      match(ValgoParser::T__2);
      setState(124);
      expr();
      setState(125);
      match(ValgoParser::T__4);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::FuncCallContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(127);
      match(ValgoParser::ID);
      setState(128);
      match(ValgoParser::T__2);
      setState(137);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 103080198152) != 0)) {
        setState(129);
        expr();
        setState(134);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__3) {
          setState(130);
          match(ValgoParser::T__3);
          setState(131);
          expr();
          setState(136);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(139);
      match(ValgoParser::T__4);
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

void ValgoParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  valgoParserInitialize();
#else
  ::antlr4::internal::call_once(valgoParserOnceFlag, valgoParserInitialize);
#endif
}
