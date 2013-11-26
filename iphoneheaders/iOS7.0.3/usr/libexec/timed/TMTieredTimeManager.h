/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/timed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <timed/TMSourceManager.h>
#import <timed/TMTimeManager.h>

@class NSMutableDictionary;

@interface TMTieredTimeManager : TMSourceManager <TMTimeManager> {

	NSMutableDictionary* _data;
	NSMutableDictionary* _reliability;

}

@property (assign,nonatomic) <TMSourceManagerDelegate> * delegate; 
-(void)setSourceTime:(id)arg1 ;
-(void)setTimeUnreliable:(id)arg1 ;
-(id)getTime;
-(id)initWithSources:(id)arg1 ;
-(id)getSources;
-(BOOL)requiresActiveSource;
-(id)sparseTiers;
-(double)propagatedErrorForSource:(id)arg1 withTime:(double)arg2 ;
-(double)correctedErrorForSource:(id)arg1 ;
-(double)minimumErrorForSource:(id)arg1 ;
-(void)dealloc;
@end
