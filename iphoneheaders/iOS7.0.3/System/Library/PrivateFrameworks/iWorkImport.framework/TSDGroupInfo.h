/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSDMutableContainerInfo.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSDSelectionStatisticsContributor.h>

@class NSMutableArray, TSDInfoGeometry;

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor> {

	NSMutableArray* mChildInfos;
	BOOL mIsInDocument;

}

@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic,@dynamic) NSObject<TSDContainerInfo> * parentInfo; 
@property (assign,nonatomic,@dynamic) TSPObject<TSDOwningAttachment> * owningAttachment; 
@property (nonatomic,@dynamic,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,@dynamic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,@dynamic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,@dynamic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
+(id)groupGeometryFromChildrenInfos:(id)arg1 ;
+(id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(BOOL*)arg4 ;
+(id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 ;
-(BOOL)aspectRatioLocked;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(void)saveToArchive:(GroupArchive*)arg1 archiver:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(Class)repClass;
-(Class)editorClass;
-(id)childInfos;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(id)commandToFlipWithOrientation:(int)arg1 ;
-(void)setChildInfos:(id)arg1 ;
-(void)addChildInfo:(id)arg1 ;
-(void)insertChildInfo:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)insertChildInfo:(id)arg1 below:(id)arg2 ;
-(void)insertChildInfo:(id)arg1 above:(id)arg2 ;
-(void)moveChildren:(id)arg1 toIndexes:(id)arg2 ;
-(void)removeChildInfo:(id)arg1 ;
-(void)replaceChildInfo:(id)arg1 with:(id)arg2 ;
-(id)allNestedChildrenInfos;
-(id)allNestedChildrenInfosIncludingGroups;
-(id)groupedGeometryForChildInfo:(id)arg1 ;
-(void)removeAllChildrenInDocument:(BOOL)arg1 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg1 ;
-(id)ungroupedGeometryForChildInfo:(id)arg1 ;
-(void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
-(void)ensureGeometryFitsChildren;
-(void)loadFromArchive:(const GroupArchive*)arg1 unarchiver:(id)arg2 upgradeDOLC:(BOOL)arg3 ;
-(id)titleForBuildChunk:(id)arg1 ;
-(void)dealloc;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)childEnumerator;
-(Class)layoutClass;
@end
