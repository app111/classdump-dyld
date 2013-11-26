/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface TSDAnnotationController : NSObject

@property (nonatomic,readonly) BOOL hasAnnotations; 
@property (nonatomic,readonly) NSString * annotationNavigationString; 
@property (assign,nonatomic) BOOL textSelectionChangeShouldDismissAnnotations; 
-(void)willShowAnnotation:(id)arg1 ;
-(void)didShowAnnotation:(id)arg1 ;
-(void)nextAnnotation:(id)arg1 ;
-(void)previousAnnotation:(id)arg1 ;
-(BOOL)textSelectionChangeShouldDismissAnnotations;
-(id)annotationNavigationTypeStringUsedForNavigating:(BOOL)arg1 ;
-(id)annotationNavigationString;
-(void)setTextSelectionChangeShouldDismissAnnotations:(BOOL)arg1 ;
-(void)commitCommentText:(id)arg1 forAnnotation:(id)arg2 ;
-(void)registerDelegate:(id)arg1 ;
-(void)unregisterDelegate:(id)arg1 ;
-(BOOL)hasAnnotations;
@end
