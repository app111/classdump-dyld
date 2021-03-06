/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TNSheetUIState : NSObject <NSCopying> {

	CGRect mVisibleRect;
	CGRect mPreviousVisibleRect;
	BOOL mHasVisibleRect;
	BOOL mHasPreviousVisibleRect;
	float mPreviousViewScale;
	float mViewScale;
	int mDeviceIdiom;
	unsigned short mFormFocusedRecordIndex;
	unsigned char mFormFocusedFieldIndex;

}

@property (assign,nonatomic) CGRect visibleRect; 
@property (nonatomic,readonly) CGPoint scrollPosition; 
@property (assign,nonatomic) CGRect previousVisibleRect; 
@property (nonatomic,readonly) CGPoint previousScrollPosition; 
@property (assign,nonatomic) BOOL hasVisibleRect; 
@property (assign,nonatomic) BOOL hasPreviousVisibleRect; 
@property (assign,nonatomic) float viewScale; 
@property (assign,nonatomic) float previousViewScale; 
@property (assign,nonatomic) int archivedDeviceIdiom; 
@property (nonatomic,readonly) int currentDeviceIdiom; 
@property (assign,nonatomic) unsigned short formFocusedRecordIndex; 
@property (assign,nonatomic) unsigned char formFocusedFieldIndex; 
+(id)sheetUIStateWithVisibleRect:(CGRect)arg1 ;
+(id)sheetUIStateWithPreviousVisibleRect:(CGRect)arg1 ;
-(void)saveToArchive:(SheetUIStateArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SheetUIStateArchive*)arg1 unarchiver:(id)arg2 ;
-(float)viewScale;
-(void)clearVisibleRect;
-(CGRect)previousVisibleRect;
-(void)setPreviousVisibleRect:(CGRect)arg1 ;
-(void)setPreviousViewScale:(float)arg1 ;
-(void)clearPreviousVisibleRect;
-(int)archivedDeviceIdiom;
-(int)currentDeviceIdiom;
-(BOOL)hasPreviousVisibleRect;
-(float)previousViewScale;
-(BOOL)hasVisibleRect;
-(unsigned short)formFocusedRecordIndex;
-(void)setFormFocusedRecordIndex:(unsigned short)arg1 ;
-(unsigned char)formFocusedFieldIndex;
-(void)setFormFocusedFieldIndex:(unsigned char)arg1 ;
-(CGPoint)scrollPosition;
-(CGPoint)previousScrollPosition;
-(void)setHasVisibleRect:(BOOL)arg1 ;
-(void)setHasPreviousVisibleRect:(BOOL)arg1 ;
-(void)setArchivedDeviceIdiom:(int)arg1 ;
-(BOOL)isDefault;
-(void)setVisibleRect:(CGRect)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(CGRect)visibleRect;
-(id).cxx_construct;
-(void)setViewScale:(float)arg1 ;
@end

