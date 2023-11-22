
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
      "expr", "atom", "proto", "stmt", "block", "blockElement", "outerBlock", 
      "func", "proc", "prog"
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
  	4,1,20,163,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,30,8,0,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,41,8,1,10,1,12,1,44,9,1,3,1,46,
  	8,1,1,1,3,1,49,8,1,1,2,1,2,1,2,1,2,1,2,5,2,56,8,2,10,2,12,2,59,9,2,3,
  	2,61,8,2,1,2,1,2,1,3,1,3,3,3,67,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,
  	3,77,8,3,10,3,12,3,80,9,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,89,8,3,10,3,
  	12,3,92,9,3,1,3,1,3,1,3,1,3,5,3,98,8,3,10,3,12,3,101,9,3,1,3,1,3,1,3,
  	1,3,1,3,5,3,108,8,3,10,3,12,3,111,9,3,3,3,113,8,3,1,3,3,3,116,8,3,1,4,
  	1,4,1,4,1,4,1,4,1,4,3,4,124,8,4,3,4,126,8,4,1,5,1,5,3,5,130,8,5,1,6,1,
  	6,1,6,4,6,135,8,6,11,6,12,6,136,1,6,5,6,140,8,6,10,6,12,6,143,9,6,3,6,
  	145,8,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,4,9,159,8,9,11,
  	9,12,9,160,1,9,0,0,10,0,2,4,6,8,10,12,14,16,18,0,0,179,0,29,1,0,0,0,2,
  	48,1,0,0,0,4,50,1,0,0,0,6,115,1,0,0,0,8,125,1,0,0,0,10,129,1,0,0,0,12,
  	131,1,0,0,0,14,148,1,0,0,0,16,152,1,0,0,0,18,158,1,0,0,0,20,21,3,2,1,
  	0,21,22,5,19,0,0,22,23,3,0,0,0,23,30,1,0,0,0,24,30,3,2,1,0,25,26,5,1,
  	0,0,26,27,3,0,0,0,27,28,5,2,0,0,28,30,1,0,0,0,29,20,1,0,0,0,29,24,1,0,
  	0,0,29,25,1,0,0,0,30,1,1,0,0,0,31,49,5,18,0,0,32,49,5,17,0,0,33,34,5,
  	20,0,0,34,49,3,0,0,0,35,36,5,17,0,0,36,45,5,1,0,0,37,42,3,0,0,0,38,39,
  	5,3,0,0,39,41,3,0,0,0,40,38,1,0,0,0,41,44,1,0,0,0,42,40,1,0,0,0,42,43,
  	1,0,0,0,43,46,1,0,0,0,44,42,1,0,0,0,45,37,1,0,0,0,45,46,1,0,0,0,46,47,
  	1,0,0,0,47,49,5,2,0,0,48,31,1,0,0,0,48,32,1,0,0,0,48,33,1,0,0,0,48,35,
  	1,0,0,0,49,3,1,0,0,0,50,51,5,17,0,0,51,60,5,1,0,0,52,57,5,17,0,0,53,54,
  	5,3,0,0,54,56,5,17,0,0,55,53,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,58,
  	1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,60,52,1,0,0,0,60,61,1,0,0,0,61,62,
  	1,0,0,0,62,63,5,2,0,0,63,5,1,0,0,0,64,66,5,4,0,0,65,67,3,0,0,0,66,65,
  	1,0,0,0,66,67,1,0,0,0,67,116,1,0,0,0,68,69,5,5,0,0,69,70,5,17,0,0,70,
  	71,5,6,0,0,71,78,3,0,0,0,72,73,5,3,0,0,73,74,5,17,0,0,74,75,5,6,0,0,75,
  	77,3,0,0,0,76,72,1,0,0,0,77,80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,
  	116,1,0,0,0,80,78,1,0,0,0,81,82,5,17,0,0,82,83,5,6,0,0,83,90,3,0,0,0,
  	84,85,5,3,0,0,85,86,5,17,0,0,86,87,5,6,0,0,87,89,3,0,0,0,88,84,1,0,0,
  	0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,116,1,0,0,0,92,90,1,0,
  	0,0,93,94,5,7,0,0,94,99,3,0,0,0,95,96,5,3,0,0,96,98,3,0,0,0,97,95,1,0,
  	0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,116,1,0,0,0,101,99,
  	1,0,0,0,102,103,5,17,0,0,103,112,5,1,0,0,104,109,3,0,0,0,105,106,5,3,
  	0,0,106,108,3,0,0,0,107,105,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,
  	110,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,112,104,1,0,0,0,112,113,1,
  	0,0,0,113,114,1,0,0,0,114,116,5,2,0,0,115,64,1,0,0,0,115,68,1,0,0,0,115,
  	81,1,0,0,0,115,93,1,0,0,0,115,102,1,0,0,0,116,7,1,0,0,0,117,126,3,12,
  	6,0,118,119,5,8,0,0,119,120,3,0,0,0,120,123,3,12,6,0,121,122,5,9,0,0,
  	122,124,3,8,4,0,123,121,1,0,0,0,123,124,1,0,0,0,124,126,1,0,0,0,125,117,
  	1,0,0,0,125,118,1,0,0,0,126,9,1,0,0,0,127,130,3,6,3,0,128,130,3,8,4,0,
  	129,127,1,0,0,0,129,128,1,0,0,0,130,11,1,0,0,0,131,144,5,10,0,0,132,134,
  	3,10,5,0,133,135,5,16,0,0,134,133,1,0,0,0,135,136,1,0,0,0,136,134,1,0,
  	0,0,136,137,1,0,0,0,137,141,1,0,0,0,138,140,3,10,5,0,139,138,1,0,0,0,
  	140,143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,145,1,0,0,0,143,141,
  	1,0,0,0,144,132,1,0,0,0,144,145,1,0,0,0,145,146,1,0,0,0,146,147,5,11,
  	0,0,147,13,1,0,0,0,148,149,5,12,0,0,149,150,3,4,2,0,150,151,3,12,6,0,
  	151,15,1,0,0,0,152,153,5,13,0,0,153,154,3,4,2,0,154,155,3,12,6,0,155,
  	17,1,0,0,0,156,159,3,14,7,0,157,159,3,16,8,0,158,156,1,0,0,0,158,157,
  	1,0,0,0,159,160,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,19,1,0,0,
  	0,21,29,42,45,48,57,60,66,78,90,99,109,112,115,123,125,129,136,141,144,
  	158,160
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


//----------------- ExprContext ------------------------------------------------------------------

ValgoParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ValgoParser::ExprContext::getRuleIndex() const {
  return ValgoParser::RuleExpr;
}

void ValgoParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BinaryExprContext ------------------------------------------------------------------

ValgoParser::AtomContext* ValgoParser::BinaryExprContext::atom() {
  return getRuleContext<ValgoParser::AtomContext>(0);
}

ValgoParser::ExprContext* ValgoParser::BinaryExprContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

tree::TerminalNode* ValgoParser::BinaryExprContext::BINOP() {
  return getToken(ValgoParser::BINOP, 0);
}

ValgoParser::BinaryExprContext::BinaryExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ValgoParser::BinaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpr(this);
}
void ValgoParser::BinaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpr(this);
}

std::any ValgoParser::BinaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitBinaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomExprContext ------------------------------------------------------------------

ValgoParser::AtomContext* ValgoParser::AtomExprContext::atom() {
  return getRuleContext<ValgoParser::AtomContext>(0);
}

ValgoParser::AtomExprContext::AtomExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ValgoParser::AtomExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomExpr(this);
}
void ValgoParser::AtomExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomExpr(this);
}

std::any ValgoParser::AtomExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitAtomExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

ValgoParser::ExprContext* ValgoParser::ParenExprContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ValgoParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void ValgoParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any ValgoParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
ValgoParser::ExprContext* ValgoParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 0, ValgoParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(29);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::BinaryExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(20);
      atom();
      setState(21);
      antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = match(ValgoParser::BINOP);
      setState(22);
      expr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::AtomExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(24);
      atom();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::ParenExprContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(25);
      match(ValgoParser::T__0);
      setState(26);
      expr();
      setState(27);
      match(ValgoParser::T__1);
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


size_t ValgoParser::AtomContext::getRuleIndex() const {
  return ValgoParser::RuleAtom;
}

void ValgoParser::AtomContext::copyFrom(AtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::IntLiteralContext::INT() {
  return getToken(ValgoParser::INT, 0);
}

ValgoParser::IntLiteralContext::IntLiteralContext(AtomContext *ctx) { copyFrom(ctx); }

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

ValgoParser::VariableContext::VariableContext(AtomContext *ctx) { copyFrom(ctx); }

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
//----------------- UnaryOpContext ------------------------------------------------------------------

tree::TerminalNode* ValgoParser::UnaryOpContext::UNOP() {
  return getToken(ValgoParser::UNOP, 0);
}

ValgoParser::ExprContext* ValgoParser::UnaryOpContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::UnaryOpContext::UnaryOpContext(AtomContext *ctx) { copyFrom(ctx); }

void ValgoParser::UnaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOp(this);
}
void ValgoParser::UnaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOp(this);
}

std::any ValgoParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
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

ValgoParser::FuncCallContext::FuncCallContext(AtomContext *ctx) { copyFrom(ctx); }

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
ValgoParser::AtomContext* ValgoParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 2, ValgoParser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::IntLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(31);
      match(ValgoParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::VariableContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(32);
      match(ValgoParser::ID);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::UnaryOpContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(33);
      match(ValgoParser::UNOP);
      setState(34);
      expr();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::FuncCallContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(35);
      match(ValgoParser::ID);
      setState(36);
      match(ValgoParser::T__0);
      setState(45);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1441794) != 0)) {
        setState(37);
        expr();
        setState(42);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__2) {
          setState(38);
          match(ValgoParser::T__2);
          setState(39);
          expr();
          setState(44);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(47);
      match(ValgoParser::T__1);
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
    setState(50);
    match(ValgoParser::ID);
    setState(51);
    match(ValgoParser::T__0);
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ValgoParser::ID) {
      setState(52);
      match(ValgoParser::ID);
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__2) {
        setState(53);
        match(ValgoParser::T__2);
        setState(54);
        match(ValgoParser::ID);
        setState(59);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(62);
    match(ValgoParser::T__1);
   
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
//----------------- DeclStmtContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> ValgoParser::DeclStmtContext::ID() {
  return getTokens(ValgoParser::ID);
}

tree::TerminalNode* ValgoParser::DeclStmtContext::ID(size_t i) {
  return getToken(ValgoParser::ID, i);
}

std::vector<ValgoParser::ExprContext *> ValgoParser::DeclStmtContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::DeclStmtContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
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
//----------------- AssignStmtContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> ValgoParser::AssignStmtContext::ID() {
  return getTokens(ValgoParser::ID);
}

tree::TerminalNode* ValgoParser::AssignStmtContext::ID(size_t i) {
  return getToken(ValgoParser::ID, i);
}

std::vector<ValgoParser::ExprContext *> ValgoParser::AssignStmtContext::expr() {
  return getRuleContexts<ValgoParser::ExprContext>();
}

ValgoParser::ExprContext* ValgoParser::AssignStmtContext::expr(size_t i) {
  return getRuleContext<ValgoParser::ExprContext>(i);
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
ValgoParser::StmtContext* ValgoParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 6, ValgoParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValgoParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(64);
      match(ValgoParser::T__3);
      setState(66);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(65);
        expr();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ValgoParser::DeclStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(68);
      match(ValgoParser::T__4);
      setState(69);
      match(ValgoParser::ID);
      setState(70);
      match(ValgoParser::T__5);
      setState(71);
      expr();
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__2) {
        setState(72);
        match(ValgoParser::T__2);
        setState(73);
        match(ValgoParser::ID);
        setState(74);
        match(ValgoParser::T__5);
        setState(75);
        expr();
        setState(80);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ValgoParser::AssignStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(81);
      match(ValgoParser::ID);
      setState(82);
      match(ValgoParser::T__5);
      setState(83);
      expr();
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__2) {
        setState(84);
        match(ValgoParser::T__2);
        setState(85);
        match(ValgoParser::ID);
        setState(86);
        match(ValgoParser::T__5);
        setState(87);
        expr();
        setState(92);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValgoParser::PrintStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(93);
      match(ValgoParser::T__6);
      setState(94);
      expr();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ValgoParser::T__2) {
        setState(95);
        match(ValgoParser::T__2);
        setState(96);
        expr();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ValgoParser::ProcCallStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(102);
      match(ValgoParser::ID);
      setState(103);
      match(ValgoParser::T__0);
      setState(112);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1441794) != 0)) {
        setState(104);
        expr();
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ValgoParser::T__2) {
          setState(105);
          match(ValgoParser::T__2);
          setState(106);
          expr();
          setState(111);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(114);
      match(ValgoParser::T__1);
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

//----------------- BlockContext ------------------------------------------------------------------

ValgoParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ValgoParser::BlockContext::getRuleIndex() const {
  return ValgoParser::RuleBlock;
}

void ValgoParser::BlockContext::copyFrom(BlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NormalContext ------------------------------------------------------------------

ValgoParser::OuterBlockContext* ValgoParser::NormalContext::outerBlock() {
  return getRuleContext<ValgoParser::OuterBlockContext>(0);
}

ValgoParser::NormalContext::NormalContext(BlockContext *ctx) { copyFrom(ctx); }

void ValgoParser::NormalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormal(this);
}
void ValgoParser::NormalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormal(this);
}

std::any ValgoParser::NormalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitNormal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseContext ------------------------------------------------------------------

ValgoParser::ExprContext* ValgoParser::IfElseContext::expr() {
  return getRuleContext<ValgoParser::ExprContext>(0);
}

ValgoParser::OuterBlockContext* ValgoParser::IfElseContext::outerBlock() {
  return getRuleContext<ValgoParser::OuterBlockContext>(0);
}

ValgoParser::BlockContext* ValgoParser::IfElseContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}

ValgoParser::IfElseContext::IfElseContext(BlockContext *ctx) { copyFrom(ctx); }

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
    setState(125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ValgoParser::T__9: {
        _localctx = _tracker.createInstance<ValgoParser::NormalContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(117);
        outerBlock();
        break;
      }

      case ValgoParser::T__7: {
        _localctx = _tracker.createInstance<ValgoParser::IfElseContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(118);
        match(ValgoParser::T__7);
        setState(119);
        antlrcpp::downCast<IfElseContext *>(_localctx)->cond = expr();
        setState(120);
        antlrcpp::downCast<IfElseContext *>(_localctx)->thenBlock = outerBlock();
        setState(123);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ValgoParser::T__8) {
          setState(121);
          match(ValgoParser::T__8);
          setState(122);
          antlrcpp::downCast<IfElseContext *>(_localctx)->elseBlock = block();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockElementContext ------------------------------------------------------------------

ValgoParser::BlockElementContext::BlockElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ValgoParser::StmtContext* ValgoParser::BlockElementContext::stmt() {
  return getRuleContext<ValgoParser::StmtContext>(0);
}

ValgoParser::BlockContext* ValgoParser::BlockElementContext::block() {
  return getRuleContext<ValgoParser::BlockContext>(0);
}


size_t ValgoParser::BlockElementContext::getRuleIndex() const {
  return ValgoParser::RuleBlockElement;
}

void ValgoParser::BlockElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockElement(this);
}

void ValgoParser::BlockElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockElement(this);
}


std::any ValgoParser::BlockElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitBlockElement(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::BlockElementContext* ValgoParser::blockElement() {
  BlockElementContext *_localctx = _tracker.createInstance<BlockElementContext>(_ctx, getState());
  enterRule(_localctx, 10, ValgoParser::RuleBlockElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ValgoParser::T__3:
      case ValgoParser::T__4:
      case ValgoParser::T__6:
      case ValgoParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(127);
        stmt();
        break;
      }

      case ValgoParser::T__7:
      case ValgoParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(128);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OuterBlockContext ------------------------------------------------------------------

ValgoParser::OuterBlockContext::OuterBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ValgoParser::BlockElementContext *> ValgoParser::OuterBlockContext::blockElement() {
  return getRuleContexts<ValgoParser::BlockElementContext>();
}

ValgoParser::BlockElementContext* ValgoParser::OuterBlockContext::blockElement(size_t i) {
  return getRuleContext<ValgoParser::BlockElementContext>(i);
}

std::vector<tree::TerminalNode *> ValgoParser::OuterBlockContext::NL() {
  return getTokens(ValgoParser::NL);
}

tree::TerminalNode* ValgoParser::OuterBlockContext::NL(size_t i) {
  return getToken(ValgoParser::NL, i);
}


size_t ValgoParser::OuterBlockContext::getRuleIndex() const {
  return ValgoParser::RuleOuterBlock;
}

void ValgoParser::OuterBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOuterBlock(this);
}

void ValgoParser::OuterBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ValgoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOuterBlock(this);
}


std::any ValgoParser::OuterBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ValgoVisitor*>(visitor))
    return parserVisitor->visitOuterBlock(this);
  else
    return visitor->visitChildren(this);
}

ValgoParser::OuterBlockContext* ValgoParser::outerBlock() {
  OuterBlockContext *_localctx = _tracker.createInstance<OuterBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, ValgoParser::RuleOuterBlock);
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
    setState(131);
    match(ValgoParser::T__9);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 132528) != 0)) {
      setState(132);
      blockElement();

      setState(134); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(133);
        match(ValgoParser::NL);
        setState(136); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ValgoParser::NL);
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 132528) != 0)) {
        setState(138);
        blockElement();
        setState(143);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(146);
    match(ValgoParser::T__10);
   
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

ValgoParser::OuterBlockContext* ValgoParser::FuncContext::outerBlock() {
  return getRuleContext<ValgoParser::OuterBlockContext>(0);
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
  enterRule(_localctx, 14, ValgoParser::RuleFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(ValgoParser::T__11);
    setState(149);
    proto();
    setState(150);
    outerBlock();
   
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

ValgoParser::OuterBlockContext* ValgoParser::ProcContext::outerBlock() {
  return getRuleContext<ValgoParser::OuterBlockContext>(0);
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
  enterRule(_localctx, 16, ValgoParser::RuleProc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(ValgoParser::T__12);
    setState(153);
    proto();
    setState(154);
    outerBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
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
  enterRule(_localctx, 18, ValgoParser::RuleProg);
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
    setState(158); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(158);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ValgoParser::T__11: {
          setState(156);
          func();
          break;
        }

        case ValgoParser::T__12: {
          setState(157);
          proc();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(160); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ValgoParser::T__11

    || _la == ValgoParser::T__12);
   
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
