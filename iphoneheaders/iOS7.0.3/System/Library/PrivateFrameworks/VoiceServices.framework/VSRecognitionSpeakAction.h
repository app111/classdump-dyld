/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VoiceServices/VSRecognitionAction.h>

@interface VSRecognitionSpeakAction : VSRecognitionAction {

	BOOL _shouldTerminate;

}
-(id)perform;
-(int)completionType;
-(id)initWithSpokenFeedbackString:(id)arg1 willTerminate:(BOOL)arg2 ;
@end
