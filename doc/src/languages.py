#!/usr/bin/env python
# -*- coding: latin-1 -*-

from __future__ import print_function, unicode_literals

SOURCE_LANGUAGE = 'en_US'
LANGUAGES = {
            'en_US': 'English',
            'de_DE': 'Deutsch',
            'es_ES': 'Espa�ol',
            'fr_FR': 'Fran�ais'
            }                 

LANGUAGE_CODES = LANGUAGES.keys()

TRANSLATIONS = LANGUAGE_CODES[:]
TRANSLATIONS.remove(SOURCE_LANGUAGE)
