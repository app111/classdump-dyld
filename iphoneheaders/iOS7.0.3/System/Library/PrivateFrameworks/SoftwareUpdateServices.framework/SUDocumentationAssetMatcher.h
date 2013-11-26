/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class ASAsset;

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher {

	ASAsset* _suAsset;

}
+(id)matcherForInstalledDocumentationFromAsset:(id)arg1 ;
+(id)matcherDocumentationFromAsset:(id)arg1 ;
-(void)dealloc;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 ;
-(id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1 ;
-(id)_queryPredicateForProperties:(id)arg1 ;
@end
