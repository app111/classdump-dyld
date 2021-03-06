/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, NSArray;

@interface TPSectionHint : NSObject {

	NSMutableArray* _pageHints;
	unsigned _documentStartPageIndex;

}

@property (nonatomic,readonly) NSArray * pageHints;                              //@synthesize pageHints=_pageHints - In the implementation block
@property (assign,nonatomic) unsigned documentStartPageIndex;                    //@synthesize documentStartPageIndex=_documentStartPageIndex - In the implementation block
@property (nonatomic,readonly) NSRange documentPageRange; 
@property (nonatomic,readonly) unsigned pageCount; 
@property (nonatomic,readonly) unsigned pageCountWithoutFillerPage; 
@property (nonatomic,readonly) unsigned lastPageIndex; 
-(id)initWithArchive:(const SectionHintArchive*)arg1 unarchiver:(id)arg2 ;
-(NSRange)documentPageRange;
-(id)pageHints;
-(void)setDocumentStartPageIndex:(unsigned)arg1 ;
-(id)pageHintForPageIndex:(unsigned)arg1 ;
-(void)trimPageHintsFromPageIndex:(unsigned)arg1 ;
-(void)setPageHints:(id)arg1 ;
-(unsigned)documentStartPageIndex;
-(void)saveToArchive:(SectionHintArchive*)arg1 archiver:(id)arg2 context:(id)arg3 shouldArchiveHintBlock:(/*^block*/ id)arg4 ;
-(BOOL)hasPageHintOfKind:(int)arg1 atPageIndex:(unsigned)arg2 ;
-(unsigned)pageCountWithoutFillerPage;
-(unsigned)lastPageIndex;
-(BOOL)hasPageHintOfKind:(int)arg1 beforePageIndex:(unsigned)arg2 ;
-(BOOL)containsDocumentPageIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)pageCount;
@end

