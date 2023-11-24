
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
      "prog", "subr", "proto", "block", "stmt", "ifElse", "expr", "primaryExpr"
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
  	4,1,38,136,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,4,0,18,8,0,11,0,12,0,19,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,1,2,5,2,33,8,2,10,2,12,2,36,9,2,3,2,38,8,2,1,2,1,2,1,3,1,3,5,3,44,
  	8,3,10,3,12,3,47,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,72,8,4,10,4,12,4,75,9,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,84,8,4,10,4,12,4,87,9,4,3,4,89,8,4,
  	1,4,1,4,1,4,1,4,3,4,95,8,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,103,8,5,3,5,105,
  	8,5,1,6,3,6,108,8,6,1,6,1,6,1,6,3,6,113,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,5,7,126,8,7,10,7,12,7,129,9,7,3,7,131,8,7,1,7,3,7,134,
  	8,7,1,7,0,0,8,0,2,4,6,8,10,12,14,0,3,1,0,1,2,1,0,16,19,2,0,16,17,19,34,
  	150,0,17,1,0,0,0,2,23,1,0,0,0,4,27,1,0,0,0,6,41,1,0,0,0,8,94,1,0,0,0,
  	10,96,1,0,0,0,12,107,1,0,0,0,14,133,1,0,0,0,16,18,3,2,1,0,17,16,1,0,0,
  	0,18,19,1,0,0,0,19,17,1,0,0,0,19,20,1,0,0,0,20,21,1,0,0,0,21,22,5,0,0,
  	1,22,1,1,0,0,0,23,24,7,0,0,0,24,25,3,4,2,0,25,26,3,6,3,0,26,3,1,0,0,0,
  	27,28,5,35,0,0,28,37,5,3,0,0,29,34,5,35,0,0,30,31,5,4,0,0,31,33,5,35,
  	0,0,32,30,1,0,0,0,33,36,1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,38,1,0,
  	0,0,36,34,1,0,0,0,37,29,1,0,0,0,37,38,1,0,0,0,38,39,1,0,0,0,39,40,5,5,
  	0,0,40,5,1,0,0,0,41,45,5,6,0,0,42,44,3,8,4,0,43,42,1,0,0,0,44,47,1,0,
  	0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,45,1,0,0,0,48,49,5,7,
  	0,0,49,7,1,0,0,0,50,51,5,8,0,0,51,95,5,9,0,0,52,53,5,10,0,0,53,54,3,12,
  	6,0,54,55,5,9,0,0,55,95,1,0,0,0,56,57,5,11,0,0,57,58,5,35,0,0,58,59,5,
  	12,0,0,59,60,3,12,6,0,60,61,5,9,0,0,61,95,1,0,0,0,62,63,5,35,0,0,63,64,
  	5,12,0,0,64,65,3,12,6,0,65,66,5,9,0,0,66,95,1,0,0,0,67,68,5,13,0,0,68,
  	73,3,12,6,0,69,70,5,4,0,0,70,72,3,12,6,0,71,69,1,0,0,0,72,75,1,0,0,0,
  	73,71,1,0,0,0,73,74,1,0,0,0,74,76,1,0,0,0,75,73,1,0,0,0,76,77,5,9,0,0,
  	77,95,1,0,0,0,78,79,5,35,0,0,79,88,5,3,0,0,80,85,3,12,6,0,81,82,5,4,0,
  	0,82,84,3,12,6,0,83,81,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,
  	0,0,86,89,1,0,0,0,87,85,1,0,0,0,88,80,1,0,0,0,88,89,1,0,0,0,89,90,1,0,
  	0,0,90,91,5,5,0,0,91,95,5,9,0,0,92,95,3,10,5,0,93,95,3,6,3,0,94,50,1,
  	0,0,0,94,52,1,0,0,0,94,56,1,0,0,0,94,62,1,0,0,0,94,67,1,0,0,0,94,78,1,
  	0,0,0,94,92,1,0,0,0,94,93,1,0,0,0,95,9,1,0,0,0,96,97,5,14,0,0,97,98,3,
  	12,6,0,98,104,3,6,3,0,99,102,5,15,0,0,100,103,3,10,5,0,101,103,3,6,3,
  	0,102,100,1,0,0,0,102,101,1,0,0,0,103,105,1,0,0,0,104,99,1,0,0,0,104,
  	105,1,0,0,0,105,11,1,0,0,0,106,108,7,1,0,0,107,106,1,0,0,0,107,108,1,
  	0,0,0,108,109,1,0,0,0,109,112,3,14,7,0,110,111,7,2,0,0,111,113,3,12,6,
  	0,112,110,1,0,0,0,112,113,1,0,0,0,113,13,1,0,0,0,114,134,5,36,0,0,115,
  	134,5,35,0,0,116,117,5,3,0,0,117,118,3,12,6,0,118,119,5,5,0,0,119,134,
  	1,0,0,0,120,121,5,35,0,0,121,130,5,3,0,0,122,127,3,12,6,0,123,124,5,4,
  	0,0,124,126,3,12,6,0,125,123,1,0,0,0,126,129,1,0,0,0,127,125,1,0,0,0,
  	127,128,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,130,122,1,0,0,0,130,131,
  	1,0,0,0,131,132,1,0,0,0,132,134,5,5,0,0,133,114,1,0,0,0,133,115,1,0,0,
  	0,133,116,1,0,0,0,133,120,1,0,0,0,134,15,1,0,0,0,15,19,34,37,45,73,85,
  	88,94,102,104,107,112,127,130,133
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

std::vector<ValgoParser::SubrContext *> ValgoParser::ProgContext::subr() {
  return getRuleContexts<ValgoParser::SubrContext>();
}

ValgoParser::SubrContext* ValgoParser::ProgContext::subr(size_t i) {
  return getRuleContext<ValgoParser::SubrContext>(i);
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
    setState(17); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(16);
      subr();
      setState(19); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ValgoParser::T__0

    || _la == ValgoParser::T__1);
    setState(21);
    match(ValgoParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrContext ------------------------------------------------------------------

ValgoParser::SubrContext::SubrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::ProtoContext* ValgoParser::SubrContext::proto() {
  return getRuleContext<ValgoParser::ProtoContext>(0);
}

ValgoParser::BlockContext* ValgoParser::SubrContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}


size_t ValgoParser::SubrContext::getRuleIndex() const {
  return ValgoParser::RuleSubr;
}

void ValgoParser::SubrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubr(this);
}

void ValgoParser::SubrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubr(this);
}


std::any ValgoParser::SubrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitSubr(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::SubrContext* ValgoParser::subr() {
  SubrContext *_localctx = _tracker.createInstance<SubrContext>(_ctx, getState());
  enterRule(_localctx, 2, ValgoParser::RuleSubr);
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
    setState(23);
    antlrcpp::downCast<SubrContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == ValgoParser::T__0

    || _la == ValgoParser::T__1)) {
      antlrcpp::downCast<SubrContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(24);
    proto();
    setState(25);
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
  enterRule(_localctx, 4, ValgoParser::RuleProto);
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
    setState(27);
    match(ValgoParser::ID);
    setState(28);
    match(ValgoParser::T__2);
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::ID) {
      setState(29);
      match(ValgoParser::ID);
      setState(34);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__3) {
        setState(30);
        match(ValgoParser::T__3);
        setState(31);
        match(ValgoParser::ID);
        setState(36);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(39);
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
    setState(41);
    match(ValgoParser::T__5);
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34359766336) != 0)) {
      setState(42);
      stmt();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
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
  enterRule(_localctx, 8, ValgoParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::ExitStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(50);
      match(ValgoParser::T__7);
      setState(51);
      match(ValgoParser::T__8);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(52);
      match(ValgoParser::T__9);
      setState(53);
      expr();
      setState(54);
      match(ValgoParser::T__8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::DeclStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(56);
      match(ValgoParser::T__10);
      setState(57);
      match(ValgoParser::ID);
      setState(58);
      match(ValgoParser::T__11);
      setState(59);
      expr();
      setState(60);
      match(ValgoParser::T__8);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::AssignStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(62);
      match(ValgoParser::ID);
      setState(63);
      match(ValgoParser::T__11);
      setState(64);
      expr();
      setState(65);
      match(ValgoParser::T__8);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ValgoParser::PrintStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(67);
      match(ValgoParser::T__12);
      setState(68);
      expr();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__3) {
        setState(69);
        match(ValgoParser::T__3);
        setState(70);
        expr();
        setState(75);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(76);
      match(ValgoParser::T__8);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ValgoParser::ProcCallStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(78);
      match(ValgoParser::ID);
      setState(79);
      match(ValgoParser::T__2);
      setState(88);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 103080198152) != 0)) {
        setState(80);
        expr();
        setState(85);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__3) {
          setState(81);
          match(ValgoParser::T__3);
          setState(82);
          expr();
          setState(87);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(90);
      match(ValgoParser::T__4);
      setState(91);
      match(ValgoParser::T__8);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ValgoParser::IfElseStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(92);
      ifElse();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ValgoParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(93);
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
  enterRule(_localctx, 10, ValgoParser::RuleIfElse);
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
    setState(96);
    match(ValgoParser::T__13);
    setState(97);
    expr();
    setState(98);
    block();
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::T__14) {
      setState(99);
      match(ValgoParser::T__14);
      setState(102);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ValgoParser::T__13: {
          setState(100);
          ifElse();
          break;
        }

        case ValgoParser::T__5: {
          setState(101);
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

ValgoParser::PrimaryExprContext* ValgoParser::ExprContext::primaryExpr() {
  return getRuleContext<ValgoParser::PrimaryExprContext>(0);
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
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 983040) != 0)) {
      setState(106);
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
    setState(109);
    primaryExpr();
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34359410688) != 0)) {
      setState(110);
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
      setState(111);
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

//----------------- PrimaryExprContext ------------------------------------------------------------------

ValgoParser::PrimaryExprContext::PrimaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ValgoParser::PrimaryExprContext::getRuleIndex() const {
  return ValgoParser::RulePrimaryExpr;
}

void ValgoParser::PrimaryExprContext::copyFrom(PrimaryExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariableExprContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::VariableExprContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

ValgoParser::VariableExprContext::VariableExprContext(PrimaryExprContext *ctx) { copyFrom(ctx); }

void ValgoParser::VariableExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableExpr(this);
}
void ValgoParser::VariableExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableExpr(this);
}

std::any ValgoParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLiteralExprContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::IntLiteralExprContext::INT() {
  return getToken(ValgoParser::INT, 0);
}

ValgoParser::IntLiteralExprContext::IntLiteralExprContext(PrimaryExprContext *ctx) { copyFrom(ctx); }

void ValgoParser::IntLiteralExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteralExpr(this);
}
void ValgoParser::IntLiteralExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteralExpr(this);
}

std::any ValgoParser::IntLiteralExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitIntLiteralExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthsizedExprContext ------------------------------------------------------------------

ValgoParser::ExprContext* ValgoParser::ParenthsizedExprContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::ParenthsizedExprContext::ParenthsizedExprContext(PrimaryExprContext *ctx) { copyFrom(ctx); }

void ValgoParser::ParenthsizedExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthsizedExpr(this);
}
void ValgoParser::ParenthsizedExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthsizedExpr(this);
}

std::any ValgoParser::ParenthsizedExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitParenthsizedExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallExprContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::FuncCallExprContext::ID() {
  return getToken(ValgoParser::ID, 0);
}

std::vector<ValgoParser::ExprContext *> ValgoParser::FuncCallExprContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::FuncCallExprContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
}

ValgoParser::FuncCallExprContext::FuncCallExprContext(PrimaryExprContext *ctx) { copyFrom(ctx); }

void ValgoParser::FuncCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallExpr(this);
}
void ValgoParser::FuncCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallExpr(this);
}

std::any ValgoParser::FuncCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitFuncCallExpr(this);
  else
    return visitor->visitChildren(this);
}
ValgoParser::PrimaryExprContext* ValgoParser::primaryExpr() {
  PrimaryExprContext *_localctx = _tracker.createInstance<PrimaryExprContext>(_ctx, getState());
  enterRule(_localctx, 14, ValgoParser::RulePrimaryExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::IntLiteralExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(114);
      match(ValgoParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::VariableExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(115);
      match(ValgoParser::ID);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::ParenthsizedExprContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(116);
      match(ValgoParser::T__2);
      setState(117);
      expr();
      setState(118);
      match(ValgoParser::T__4);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::FuncCallExprContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(120);
      match(ValgoParser::ID);
      setState(121);
      match(ValgoParser::T__2);
      setState(130);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 103080198152) != 0)) {
        setState(122);
        expr();
        setState(127);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__3) {
          setState(123);
          match(ValgoParser::T__3);
          setState(124);
          expr();
          setState(129);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(132);
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
