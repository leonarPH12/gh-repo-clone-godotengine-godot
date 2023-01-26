#ifndef DYLIBLOAD_WRAPPER_SPEECHD
#define DYLIBLOAD_WRAPPER_SPEECHD
// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper for details
// generated by ../dynload-wrapper/generate-wrapper.py 0.3 on 2023-01-12 10:07:46
// flags: ../dynload-wrapper/generate-wrapper.py --include ./thirdparty/linuxbsd_headers/speechd/libspeechd.h --sys-include "thirdparty/linuxbsd_headers/speechd/libspeechd.h" --soname libspeechd.so.2 --init-name speechd --omit-prefix spd_get_client_list --output-header ./platform/linuxbsd/speechd-so_wrap.h --output-implementation ./platform/linuxbsd/speechd-so_wrap.c
//
#include <stdint.h>

#define SPDConnectionAddress__free SPDConnectionAddress__free_dylibloader_orig_speechd
#define spd_get_default_address spd_get_default_address_dylibloader_orig_speechd
#define spd_open spd_open_dylibloader_orig_speechd
#define spd_open2 spd_open2_dylibloader_orig_speechd
#define spd_close spd_close_dylibloader_orig_speechd
#define spd_say spd_say_dylibloader_orig_speechd
#define spd_sayf spd_sayf_dylibloader_orig_speechd
#define spd_stop spd_stop_dylibloader_orig_speechd
#define spd_stop_all spd_stop_all_dylibloader_orig_speechd
#define spd_stop_uid spd_stop_uid_dylibloader_orig_speechd
#define spd_cancel spd_cancel_dylibloader_orig_speechd
#define spd_cancel_all spd_cancel_all_dylibloader_orig_speechd
#define spd_cancel_uid spd_cancel_uid_dylibloader_orig_speechd
#define spd_pause spd_pause_dylibloader_orig_speechd
#define spd_pause_all spd_pause_all_dylibloader_orig_speechd
#define spd_pause_uid spd_pause_uid_dylibloader_orig_speechd
#define spd_resume spd_resume_dylibloader_orig_speechd
#define spd_resume_all spd_resume_all_dylibloader_orig_speechd
#define spd_resume_uid spd_resume_uid_dylibloader_orig_speechd
#define spd_key spd_key_dylibloader_orig_speechd
#define spd_char spd_char_dylibloader_orig_speechd
#define spd_wchar spd_wchar_dylibloader_orig_speechd
#define spd_sound_icon spd_sound_icon_dylibloader_orig_speechd
#define spd_set_voice_type spd_set_voice_type_dylibloader_orig_speechd
#define spd_set_voice_type_all spd_set_voice_type_all_dylibloader_orig_speechd
#define spd_set_voice_type_uid spd_set_voice_type_uid_dylibloader_orig_speechd
#define spd_get_voice_type spd_get_voice_type_dylibloader_orig_speechd
#define spd_set_synthesis_voice spd_set_synthesis_voice_dylibloader_orig_speechd
#define spd_set_synthesis_voice_all spd_set_synthesis_voice_all_dylibloader_orig_speechd
#define spd_set_synthesis_voice_uid spd_set_synthesis_voice_uid_dylibloader_orig_speechd
#define spd_set_data_mode spd_set_data_mode_dylibloader_orig_speechd
#define spd_set_notification_on spd_set_notification_on_dylibloader_orig_speechd
#define spd_set_notification_off spd_set_notification_off_dylibloader_orig_speechd
#define spd_set_notification spd_set_notification_dylibloader_orig_speechd
#define spd_set_voice_rate spd_set_voice_rate_dylibloader_orig_speechd
#define spd_set_voice_rate_all spd_set_voice_rate_all_dylibloader_orig_speechd
#define spd_set_voice_rate_uid spd_set_voice_rate_uid_dylibloader_orig_speechd
#define spd_get_voice_rate spd_get_voice_rate_dylibloader_orig_speechd
#define spd_set_voice_pitch spd_set_voice_pitch_dylibloader_orig_speechd
#define spd_set_voice_pitch_all spd_set_voice_pitch_all_dylibloader_orig_speechd
#define spd_set_voice_pitch_uid spd_set_voice_pitch_uid_dylibloader_orig_speechd
#define spd_get_voice_pitch spd_get_voice_pitch_dylibloader_orig_speechd
#define spd_set_volume spd_set_volume_dylibloader_orig_speechd
#define spd_set_volume_all spd_set_volume_all_dylibloader_orig_speechd
#define spd_set_volume_uid spd_set_volume_uid_dylibloader_orig_speechd
#define spd_get_volume spd_get_volume_dylibloader_orig_speechd
#define spd_set_punctuation spd_set_punctuation_dylibloader_orig_speechd
#define spd_set_punctuation_all spd_set_punctuation_all_dylibloader_orig_speechd
#define spd_set_punctuation_uid spd_set_punctuation_uid_dylibloader_orig_speechd
#define spd_set_capital_letters spd_set_capital_letters_dylibloader_orig_speechd
#define spd_set_capital_letters_all spd_set_capital_letters_all_dylibloader_orig_speechd
#define spd_set_capital_letters_uid spd_set_capital_letters_uid_dylibloader_orig_speechd
#define spd_set_spelling spd_set_spelling_dylibloader_orig_speechd
#define spd_set_spelling_all spd_set_spelling_all_dylibloader_orig_speechd
#define spd_set_spelling_uid spd_set_spelling_uid_dylibloader_orig_speechd
#define spd_set_language spd_set_language_dylibloader_orig_speechd
#define spd_set_language_all spd_set_language_all_dylibloader_orig_speechd
#define spd_set_language_uid spd_set_language_uid_dylibloader_orig_speechd
#define spd_get_language spd_get_language_dylibloader_orig_speechd
#define spd_set_output_module spd_set_output_module_dylibloader_orig_speechd
#define spd_set_output_module_all spd_set_output_module_all_dylibloader_orig_speechd
#define spd_set_output_module_uid spd_set_output_module_uid_dylibloader_orig_speechd
#define spd_get_message_list_fd spd_get_message_list_fd_dylibloader_orig_speechd
#define spd_list_modules spd_list_modules_dylibloader_orig_speechd
#define free_spd_modules free_spd_modules_dylibloader_orig_speechd
#define spd_get_output_module spd_get_output_module_dylibloader_orig_speechd
#define spd_list_voices spd_list_voices_dylibloader_orig_speechd
#define spd_list_synthesis_voices spd_list_synthesis_voices_dylibloader_orig_speechd
#define free_spd_voices free_spd_voices_dylibloader_orig_speechd
#define spd_execute_command_with_list_reply spd_execute_command_with_list_reply_dylibloader_orig_speechd
#define spd_execute_command spd_execute_command_dylibloader_orig_speechd
#define spd_execute_command_with_reply spd_execute_command_with_reply_dylibloader_orig_speechd
#define spd_execute_command_wo_mutex spd_execute_command_wo_mutex_dylibloader_orig_speechd
#define spd_send_data spd_send_data_dylibloader_orig_speechd
#define spd_send_data_wo_mutex spd_send_data_wo_mutex_dylibloader_orig_speechd
#include "thirdparty/linuxbsd_headers/speechd/libspeechd.h"
#undef SPDConnectionAddress__free
#undef spd_get_default_address
#undef spd_open
#undef spd_open2
#undef spd_close
#undef spd_say
#undef spd_sayf
#undef spd_stop
#undef spd_stop_all
#undef spd_stop_uid
#undef spd_cancel
#undef spd_cancel_all
#undef spd_cancel_uid
#undef spd_pause
#undef spd_pause_all
#undef spd_pause_uid
#undef spd_resume
#undef spd_resume_all
#undef spd_resume_uid
#undef spd_key
#undef spd_char
#undef spd_wchar
#undef spd_sound_icon
#undef spd_set_voice_type
#undef spd_set_voice_type_all
#undef spd_set_voice_type_uid
#undef spd_get_voice_type
#undef spd_set_synthesis_voice
#undef spd_set_synthesis_voice_all
#undef spd_set_synthesis_voice_uid
#undef spd_set_data_mode
#undef spd_set_notification_on
#undef spd_set_notification_off
#undef spd_set_notification
#undef spd_set_voice_rate
#undef spd_set_voice_rate_all
#undef spd_set_voice_rate_uid
#undef spd_get_voice_rate
#undef spd_set_voice_pitch
#undef spd_set_voice_pitch_all
#undef spd_set_voice_pitch_uid
#undef spd_get_voice_pitch
#undef spd_set_volume
#undef spd_set_volume_all
#undef spd_set_volume_uid
#undef spd_get_volume
#undef spd_set_punctuation
#undef spd_set_punctuation_all
#undef spd_set_punctuation_uid
#undef spd_set_capital_letters
#undef spd_set_capital_letters_all
#undef spd_set_capital_letters_uid
#undef spd_set_spelling
#undef spd_set_spelling_all
#undef spd_set_spelling_uid
#undef spd_set_language
#undef spd_set_language_all
#undef spd_set_language_uid
#undef spd_get_language
#undef spd_set_output_module
#undef spd_set_output_module_all
#undef spd_set_output_module_uid
#undef spd_get_message_list_fd
#undef spd_list_modules
#undef free_spd_modules
#undef spd_get_output_module
#undef spd_list_voices
#undef spd_list_synthesis_voices
#undef free_spd_voices
#undef spd_execute_command_with_list_reply
#undef spd_execute_command
#undef spd_execute_command_with_reply
#undef spd_execute_command_wo_mutex
#undef spd_send_data
#undef spd_send_data_wo_mutex
#ifdef __cplusplus
extern "C" {
#endif
#define SPDConnectionAddress__free SPDConnectionAddress__free_dylibloader_wrapper_speechd
#define spd_get_default_address spd_get_default_address_dylibloader_wrapper_speechd
#define spd_open spd_open_dylibloader_wrapper_speechd
#define spd_open2 spd_open2_dylibloader_wrapper_speechd
#define spd_close spd_close_dylibloader_wrapper_speechd
#define spd_say spd_say_dylibloader_wrapper_speechd
#define spd_sayf spd_sayf_dylibloader_wrapper_speechd
#define spd_stop spd_stop_dylibloader_wrapper_speechd
#define spd_stop_all spd_stop_all_dylibloader_wrapper_speechd
#define spd_stop_uid spd_stop_uid_dylibloader_wrapper_speechd
#define spd_cancel spd_cancel_dylibloader_wrapper_speechd
#define spd_cancel_all spd_cancel_all_dylibloader_wrapper_speechd
#define spd_cancel_uid spd_cancel_uid_dylibloader_wrapper_speechd
#define spd_pause spd_pause_dylibloader_wrapper_speechd
#define spd_pause_all spd_pause_all_dylibloader_wrapper_speechd
#define spd_pause_uid spd_pause_uid_dylibloader_wrapper_speechd
#define spd_resume spd_resume_dylibloader_wrapper_speechd
#define spd_resume_all spd_resume_all_dylibloader_wrapper_speechd
#define spd_resume_uid spd_resume_uid_dylibloader_wrapper_speechd
#define spd_key spd_key_dylibloader_wrapper_speechd
#define spd_char spd_char_dylibloader_wrapper_speechd
#define spd_wchar spd_wchar_dylibloader_wrapper_speechd
#define spd_sound_icon spd_sound_icon_dylibloader_wrapper_speechd
#define spd_set_voice_type spd_set_voice_type_dylibloader_wrapper_speechd
#define spd_set_voice_type_all spd_set_voice_type_all_dylibloader_wrapper_speechd
#define spd_set_voice_type_uid spd_set_voice_type_uid_dylibloader_wrapper_speechd
#define spd_get_voice_type spd_get_voice_type_dylibloader_wrapper_speechd
#define spd_set_synthesis_voice spd_set_synthesis_voice_dylibloader_wrapper_speechd
#define spd_set_synthesis_voice_all spd_set_synthesis_voice_all_dylibloader_wrapper_speechd
#define spd_set_synthesis_voice_uid spd_set_synthesis_voice_uid_dylibloader_wrapper_speechd
#define spd_set_data_mode spd_set_data_mode_dylibloader_wrapper_speechd
#define spd_set_notification_on spd_set_notification_on_dylibloader_wrapper_speechd
#define spd_set_notification_off spd_set_notification_off_dylibloader_wrapper_speechd
#define spd_set_notification spd_set_notification_dylibloader_wrapper_speechd
#define spd_set_voice_rate spd_set_voice_rate_dylibloader_wrapper_speechd
#define spd_set_voice_rate_all spd_set_voice_rate_all_dylibloader_wrapper_speechd
#define spd_set_voice_rate_uid spd_set_voice_rate_uid_dylibloader_wrapper_speechd
#define spd_get_voice_rate spd_get_voice_rate_dylibloader_wrapper_speechd
#define spd_set_voice_pitch spd_set_voice_pitch_dylibloader_wrapper_speechd
#define spd_set_voice_pitch_all spd_set_voice_pitch_all_dylibloader_wrapper_speechd
#define spd_set_voice_pitch_uid spd_set_voice_pitch_uid_dylibloader_wrapper_speechd
#define spd_get_voice_pitch spd_get_voice_pitch_dylibloader_wrapper_speechd
#define spd_set_volume spd_set_volume_dylibloader_wrapper_speechd
#define spd_set_volume_all spd_set_volume_all_dylibloader_wrapper_speechd
#define spd_set_volume_uid spd_set_volume_uid_dylibloader_wrapper_speechd
#define spd_get_volume spd_get_volume_dylibloader_wrapper_speechd
#define spd_set_punctuation spd_set_punctuation_dylibloader_wrapper_speechd
#define spd_set_punctuation_all spd_set_punctuation_all_dylibloader_wrapper_speechd
#define spd_set_punctuation_uid spd_set_punctuation_uid_dylibloader_wrapper_speechd
#define spd_set_capital_letters spd_set_capital_letters_dylibloader_wrapper_speechd
#define spd_set_capital_letters_all spd_set_capital_letters_all_dylibloader_wrapper_speechd
#define spd_set_capital_letters_uid spd_set_capital_letters_uid_dylibloader_wrapper_speechd
#define spd_set_spelling spd_set_spelling_dylibloader_wrapper_speechd
#define spd_set_spelling_all spd_set_spelling_all_dylibloader_wrapper_speechd
#define spd_set_spelling_uid spd_set_spelling_uid_dylibloader_wrapper_speechd
#define spd_set_language spd_set_language_dylibloader_wrapper_speechd
#define spd_set_language_all spd_set_language_all_dylibloader_wrapper_speechd
#define spd_set_language_uid spd_set_language_uid_dylibloader_wrapper_speechd
#define spd_get_language spd_get_language_dylibloader_wrapper_speechd
#define spd_set_output_module spd_set_output_module_dylibloader_wrapper_speechd
#define spd_set_output_module_all spd_set_output_module_all_dylibloader_wrapper_speechd
#define spd_set_output_module_uid spd_set_output_module_uid_dylibloader_wrapper_speechd
#define spd_get_message_list_fd spd_get_message_list_fd_dylibloader_wrapper_speechd
#define spd_list_modules spd_list_modules_dylibloader_wrapper_speechd
#define free_spd_modules free_spd_modules_dylibloader_wrapper_speechd
#define spd_get_output_module spd_get_output_module_dylibloader_wrapper_speechd
#define spd_list_voices spd_list_voices_dylibloader_wrapper_speechd
#define spd_list_synthesis_voices spd_list_synthesis_voices_dylibloader_wrapper_speechd
#define free_spd_voices free_spd_voices_dylibloader_wrapper_speechd
#define spd_execute_command_with_list_reply spd_execute_command_with_list_reply_dylibloader_wrapper_speechd
#define spd_execute_command spd_execute_command_dylibloader_wrapper_speechd
#define spd_execute_command_with_reply spd_execute_command_with_reply_dylibloader_wrapper_speechd
#define spd_execute_command_wo_mutex spd_execute_command_wo_mutex_dylibloader_wrapper_speechd
#define spd_send_data spd_send_data_dylibloader_wrapper_speechd
#define spd_send_data_wo_mutex spd_send_data_wo_mutex_dylibloader_wrapper_speechd
extern void (*SPDConnectionAddress__free_dylibloader_wrapper_speechd)( SPDConnectionAddress*);
extern SPDConnectionAddress* (*spd_get_default_address_dylibloader_wrapper_speechd)( char**);
extern SPDConnection* (*spd_open_dylibloader_wrapper_speechd)(const char*,const char*,const char*, SPDConnectionMode);
extern SPDConnection* (*spd_open2_dylibloader_wrapper_speechd)(const char*,const char*,const char*, SPDConnectionMode, SPDConnectionAddress*, int, char**);
extern void (*spd_close_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_say_dylibloader_wrapper_speechd)( SPDConnection*, SPDPriority,const char*);
extern int (*spd_sayf_dylibloader_wrapper_speechd)( SPDConnection*, SPDPriority,const char*,...);
extern int (*spd_stop_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_stop_all_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_stop_uid_dylibloader_wrapper_speechd)( SPDConnection*, int);
extern int (*spd_cancel_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_cancel_all_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_cancel_uid_dylibloader_wrapper_speechd)( SPDConnection*, int);
extern int (*spd_pause_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_pause_all_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_pause_uid_dylibloader_wrapper_speechd)( SPDConnection*, int);
extern int (*spd_resume_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_resume_all_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_resume_uid_dylibloader_wrapper_speechd)( SPDConnection*, int);
extern int (*spd_key_dylibloader_wrapper_speechd)( SPDConnection*, SPDPriority,const char*);
extern int (*spd_char_dylibloader_wrapper_speechd)( SPDConnection*, SPDPriority,const char*);
extern int (*spd_wchar_dylibloader_wrapper_speechd)( SPDConnection*, SPDPriority, wchar_t);
extern int (*spd_sound_icon_dylibloader_wrapper_speechd)( SPDConnection*, SPDPriority,const char*);
extern int (*spd_set_voice_type_dylibloader_wrapper_speechd)( SPDConnection*, SPDVoiceType);
extern int (*spd_set_voice_type_all_dylibloader_wrapper_speechd)( SPDConnection*, SPDVoiceType);
extern int (*spd_set_voice_type_uid_dylibloader_wrapper_speechd)( SPDConnection*, SPDVoiceType, unsigned int);
extern SPDVoiceType (*spd_get_voice_type_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_set_synthesis_voice_dylibloader_wrapper_speechd)( SPDConnection*,const char*);
extern int (*spd_set_synthesis_voice_all_dylibloader_wrapper_speechd)( SPDConnection*,const char*);
extern int (*spd_set_synthesis_voice_uid_dylibloader_wrapper_speechd)( SPDConnection*,const char*, unsigned int);
extern int (*spd_set_data_mode_dylibloader_wrapper_speechd)( SPDConnection*, SPDDataMode);
extern int (*spd_set_notification_on_dylibloader_wrapper_speechd)( SPDConnection*, SPDNotification);
extern int (*spd_set_notification_off_dylibloader_wrapper_speechd)( SPDConnection*, SPDNotification);
extern int (*spd_set_notification_dylibloader_wrapper_speechd)( SPDConnection*, SPDNotification,const char*);
extern int (*spd_set_voice_rate_dylibloader_wrapper_speechd)( SPDConnection*, signed int);
extern int (*spd_set_voice_rate_all_dylibloader_wrapper_speechd)( SPDConnection*, signed int);
extern int (*spd_set_voice_rate_uid_dylibloader_wrapper_speechd)( SPDConnection*, signed int, unsigned int);
extern int (*spd_get_voice_rate_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_set_voice_pitch_dylibloader_wrapper_speechd)( SPDConnection*, signed int);
extern int (*spd_set_voice_pitch_all_dylibloader_wrapper_speechd)( SPDConnection*, signed int);
extern int (*spd_set_voice_pitch_uid_dylibloader_wrapper_speechd)( SPDConnection*, signed int, unsigned int);
extern int (*spd_get_voice_pitch_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_set_volume_dylibloader_wrapper_speechd)( SPDConnection*, signed int);
extern int (*spd_set_volume_all_dylibloader_wrapper_speechd)( SPDConnection*, signed int);
extern int (*spd_set_volume_uid_dylibloader_wrapper_speechd)( SPDConnection*, signed int, unsigned int);
extern int (*spd_get_volume_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_set_punctuation_dylibloader_wrapper_speechd)( SPDConnection*, SPDPunctuation);
extern int (*spd_set_punctuation_all_dylibloader_wrapper_speechd)( SPDConnection*, SPDPunctuation);
extern int (*spd_set_punctuation_uid_dylibloader_wrapper_speechd)( SPDConnection*, SPDPunctuation, unsigned int);
extern int (*spd_set_capital_letters_dylibloader_wrapper_speechd)( SPDConnection*, SPDCapitalLetters);
extern int (*spd_set_capital_letters_all_dylibloader_wrapper_speechd)( SPDConnection*, SPDCapitalLetters);
extern int (*spd_set_capital_letters_uid_dylibloader_wrapper_speechd)( SPDConnection*, SPDCapitalLetters, unsigned int);
extern int (*spd_set_spelling_dylibloader_wrapper_speechd)( SPDConnection*, SPDSpelling);
extern int (*spd_set_spelling_all_dylibloader_wrapper_speechd)( SPDConnection*, SPDSpelling);
extern int (*spd_set_spelling_uid_dylibloader_wrapper_speechd)( SPDConnection*, SPDSpelling, unsigned int);
extern int (*spd_set_language_dylibloader_wrapper_speechd)( SPDConnection*,const char*);
extern int (*spd_set_language_all_dylibloader_wrapper_speechd)( SPDConnection*,const char*);
extern int (*spd_set_language_uid_dylibloader_wrapper_speechd)( SPDConnection*,const char*, unsigned int);
extern char* (*spd_get_language_dylibloader_wrapper_speechd)( SPDConnection*);
extern int (*spd_set_output_module_dylibloader_wrapper_speechd)( SPDConnection*,const char*);
extern int (*spd_set_output_module_all_dylibloader_wrapper_speechd)( SPDConnection*,const char*);
extern int (*spd_set_output_module_uid_dylibloader_wrapper_speechd)( SPDConnection*,const char*, unsigned int);
extern int (*spd_get_message_list_fd_dylibloader_wrapper_speechd)( SPDConnection*, int, int*, char**);
extern char** (*spd_list_modules_dylibloader_wrapper_speechd)( SPDConnection*);
extern void (*free_spd_modules_dylibloader_wrapper_speechd)( char**);
extern char* (*spd_get_output_module_dylibloader_wrapper_speechd)( SPDConnection*);
extern char** (*spd_list_voices_dylibloader_wrapper_speechd)( SPDConnection*);
extern SPDVoice** (*spd_list_synthesis_voices_dylibloader_wrapper_speechd)( SPDConnection*);
extern void (*free_spd_voices_dylibloader_wrapper_speechd)( SPDVoice**);
extern char** (*spd_execute_command_with_list_reply_dylibloader_wrapper_speechd)( SPDConnection*, char*);
extern int (*spd_execute_command_dylibloader_wrapper_speechd)( SPDConnection*, char*);
extern int (*spd_execute_command_with_reply_dylibloader_wrapper_speechd)( SPDConnection*, char*, char**);
extern int (*spd_execute_command_wo_mutex_dylibloader_wrapper_speechd)( SPDConnection*, char*);
extern char* (*spd_send_data_dylibloader_wrapper_speechd)( SPDConnection*,const char*, int);
extern char* (*spd_send_data_wo_mutex_dylibloader_wrapper_speechd)( SPDConnection*,const char*, int);
int initialize_speechd(int verbose);
#ifdef __cplusplus
}
#endif
#endif