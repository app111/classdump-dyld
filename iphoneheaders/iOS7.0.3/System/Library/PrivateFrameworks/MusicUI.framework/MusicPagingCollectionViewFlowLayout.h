/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface MusicPagingCollectionViewFlowLayout : UICollectionViewFlowLayout {

	float _distanceFromCenterForMinimumAlpha;
	float _minimumCellAlpha;
	int _numberOfItemsPerPage;

}

@property (assign,nonatomic) float distanceFromCenterForMinimumAlpha;              //@synthesize distanceFromCenterForMinimumAlpha=_distanceFromCenterForMinimumAlpha - In the implementation block
@property (assign,nonatomic) float minimumCellAlpha;                               //@synthesize minimumCellAlpha=_minimumCellAlpha - In the implementation block
@property (assign,nonatomic) int numberOfItemsPerPage;                             //@synthesize numberOfItemsPerPage=_numberOfItemsPerPage - In the implementation block
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(int)indexOfItemClosestToPoint:(CGPoint)arg1 ;
-(void)setDistanceFromCenterForMinimumAlpha:(float)arg1 ;
-(void)setMinimumCellAlpha:(float)arg1 ;
-(float)distanceFromCenterForMinimumAlpha;
-(float)minimumCellAlpha;
-(void)setNumberOfItemsPerPage:(int)arg1 ;
-(int)numberOfItemsPerPage;
@end
