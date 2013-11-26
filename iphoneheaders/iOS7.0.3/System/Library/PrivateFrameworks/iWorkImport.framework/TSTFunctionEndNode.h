/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class TSTFunctionNode;

@interface TSTFunctionEndNode : TSTExpressionNode {

	TSTFunctionNode* mFunctionNode;

}

@property (assign,nonatomic) TSTFunctionNode * functionNode; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(FunctionEndNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FunctionEndNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 functionNode:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)functionNode;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS266)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)exportString;
-(void)setFunctionNode:(id)arg1 ;
-(void)dealloc;
-(id)string;
-(int)tokenType;
@end
